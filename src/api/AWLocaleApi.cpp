/**
 * Appwrite
 * Appwrite backend as a service cuts up to 70% of the time and costs required for building a modern application. We abstract and simplify common development tasks behind a REST APIs, to help you develop your app in a fast and secure way. For full API documentation and tutorials go to [https://appwrite.io/docs](https://appwrite.io/docs)
 *
 * The version of the OpenAPI document: 1.3.0
 * Contact: team@appwrite.io
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "AWLocaleApi.h"
#include "src/AWServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

AWLocaleApi::AWLocaleApi(const int timeOut)
    : _timeOut(timeOut),
      _manager(nullptr),
      _isResponseCompressionEnabled(false),
      _isRequestCompressionEnabled(false) {
    initializeServerConfigs();
}

AWLocaleApi::~AWLocaleApi() {
}

void AWLocaleApi::initializeServerConfigs() {
    //Default server
    QList<AWServerConfiguration> defaultConf = QList<AWServerConfiguration>();
    //varying endpoint server
    defaultConf.append(AWServerConfiguration(
    QUrl("https://HOSTNAME/v1"),
    "No description provided",
    QMap<QString, AWServerVariable>()));
    _serverConfigs.insert("localeGet", defaultConf);
    _serverIndices.insert("localeGet", 0);
    _serverConfigs.insert("localeListContinents", defaultConf);
    _serverIndices.insert("localeListContinents", 0);
    _serverConfigs.insert("localeListCountries", defaultConf);
    _serverIndices.insert("localeListCountries", 0);
    _serverConfigs.insert("localeListCountriesEU", defaultConf);
    _serverIndices.insert("localeListCountriesEU", 0);
    _serverConfigs.insert("localeListCountriesPhones", defaultConf);
    _serverIndices.insert("localeListCountriesPhones", 0);
    _serverConfigs.insert("localeListCurrencies", defaultConf);
    _serverIndices.insert("localeListCurrencies", 0);
    _serverConfigs.insert("localeListLanguages", defaultConf);
    _serverIndices.insert("localeListLanguages", 0);
}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found
*/
int AWLocaleApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value) {
    auto it = _serverConfigs.find(operation);
    if (it != _serverConfigs.end() && serverIndex < it.value().size()) {
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void AWLocaleApi::setServerIndex(const QString &operation, int serverIndex) {
    if (_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size()) {
        _serverIndices[operation] = serverIndex;
    }
}

void AWLocaleApi::setApiKey(const QString &apiKeyName, const QString &apiKey) {
    _apiKeys.insert(apiKeyName, apiKey);
}

void AWLocaleApi::setBearerToken(const QString &token) {
    _bearerToken = token;
}

void AWLocaleApi::setUsername(const QString &username) {
    _username = username;
}

void AWLocaleApi::setPassword(const QString &password) {
    _password = password;
}


void AWLocaleApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void AWLocaleApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void AWLocaleApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
    _manager = manager;
}

/**
    * Appends a new ServerConfiguration to the config map for a specific operation.
    * @param operation The id to the target operation.
    * @param url A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    * returns the index of the new server config on success and -1 if the operation is not found
    */
int AWLocaleApi::addServerConfiguration(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, AWServerVariable> &variables) {
    if (_serverConfigs.contains(operation)) {
        _serverConfigs[operation].append(AWServerConfiguration(
                    url,
                    description,
                    variables));
        return _serverConfigs[operation].size()-1;
    } else {
        return -1;
    }
}

/**
    * Appends a new ServerConfiguration to the config map for a all operations and sets the index to that server.
    * @param url A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    */
void AWLocaleApi::setNewServerForAllOperations(const QUrl &url, const QString &description, const QMap<QString, AWServerVariable> &variables) {
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
    for (auto keyIt = _serverIndices.keyBegin(); keyIt != _serverIndices.keyEnd(); keyIt++) {
        setServerIndex(*keyIt, addServerConfiguration(*keyIt, url, description, variables));
    }
#else
    for (auto &e : _serverIndices.keys()) {
        setServerIndex(e, addServerConfiguration(e, url, description, variables));
    }
#endif
}

/**
    * Appends a new ServerConfiguration to the config map for an operations and sets the index to that server.
    * @param URL A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    */
void AWLocaleApi::setNewServer(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, AWServerVariable> &variables) {
    setServerIndex(operation, addServerConfiguration(operation, url, description, variables));
}

void AWLocaleApi::addHeaders(const QString &key, const QString &value) {
    _defaultHeaders.insert(key, value);
}

void AWLocaleApi::enableRequestCompression() {
    _isRequestCompressionEnabled = true;
}

void AWLocaleApi::enableResponseCompression() {
    _isResponseCompressionEnabled = true;
}

void AWLocaleApi::abortRequests() {
    emit abortRequestsSignal();
}

QString AWLocaleApi::getParamStylePrefix(const QString &style) {
    if (style == "matrix") {
        return ";";
    } else if (style == "label") {
        return ".";
    } else if (style == "form") {
        return "&";
    } else if (style == "simple") {
        return "";
    } else if (style == "spaceDelimited") {
        return "&";
    } else if (style == "pipeDelimited") {
        return "&";
    } else {
        return "none";
    }
}

QString AWLocaleApi::getParamStyleSuffix(const QString &style) {
    if (style == "matrix") {
        return "=";
    } else if (style == "label") {
        return "";
    } else if (style == "form") {
        return "=";
    } else if (style == "simple") {
        return "";
    } else if (style == "spaceDelimited") {
        return "=";
    } else if (style == "pipeDelimited") {
        return "=";
    } else {
        return "none";
    }
}

QString AWLocaleApi::getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode) {

    if (style == "matrix") {
        return (isExplode) ? ";" + name + "=" : ",";

    } else if (style == "label") {
        return (isExplode) ? "." : ",";

    } else if (style == "form") {
        return (isExplode) ? "&" + name + "=" : ",";

    } else if (style == "simple") {
        return ",";
    } else if (style == "spaceDelimited") {
        return (isExplode) ? "&" + name + "=" : " ";

    } else if (style == "pipeDelimited") {
        return (isExplode) ? "&" + name + "=" : "|";

    } else if (style == "deepObject") {
        return (isExplode) ? "&" : "none";

    } else {
        return "none";
    }
}

void AWLocaleApi::localeGet() {
    QString fullPath = QString(_serverConfigs["localeGet"][_serverIndices.value("localeGet")].URL()+"/locale");
    
    if (_apiKeys.contains("Project")) {
        addHeaders("Project",_apiKeys.find("Project").value());
    }
    
    if (_apiKeys.contains("JWT")) {
        addHeaders("JWT",_apiKeys.find("JWT").value());
    }
    
    AWHttpRequestWorker *worker = new AWHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    AWHttpRequestInput input(fullPath, "GET");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &AWHttpRequestWorker::on_execution_finished, this, &AWLocaleApi::localeGetCallback);
    connect(this, &AWLocaleApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<AWHttpRequestWorker*>().size() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void AWLocaleApi::localeGetCallback(AWHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    AWLocale output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit localeGetSignal(output);
        emit localeGetSignalFull(worker, output);
    } else {
        emit localeGetSignalE(output, error_type, error_str);
        emit localeGetSignalEFull(worker, error_type, error_str);
    }
}

void AWLocaleApi::localeListContinents() {
    QString fullPath = QString(_serverConfigs["localeListContinents"][_serverIndices.value("localeListContinents")].URL()+"/locale/continents");
    
    if (_apiKeys.contains("Project")) {
        addHeaders("Project",_apiKeys.find("Project").value());
    }
    
    if (_apiKeys.contains("JWT")) {
        addHeaders("JWT",_apiKeys.find("JWT").value());
    }
    
    AWHttpRequestWorker *worker = new AWHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    AWHttpRequestInput input(fullPath, "GET");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &AWHttpRequestWorker::on_execution_finished, this, &AWLocaleApi::localeListContinentsCallback);
    connect(this, &AWLocaleApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<AWHttpRequestWorker*>().size() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void AWLocaleApi::localeListContinentsCallback(AWHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    AWContinentList output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit localeListContinentsSignal(output);
        emit localeListContinentsSignalFull(worker, output);
    } else {
        emit localeListContinentsSignalE(output, error_type, error_str);
        emit localeListContinentsSignalEFull(worker, error_type, error_str);
    }
}

void AWLocaleApi::localeListCountries() {
    QString fullPath = QString(_serverConfigs["localeListCountries"][_serverIndices.value("localeListCountries")].URL()+"/locale/countries");
    
    if (_apiKeys.contains("Project")) {
        addHeaders("Project",_apiKeys.find("Project").value());
    }
    
    if (_apiKeys.contains("JWT")) {
        addHeaders("JWT",_apiKeys.find("JWT").value());
    }
    
    AWHttpRequestWorker *worker = new AWHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    AWHttpRequestInput input(fullPath, "GET");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &AWHttpRequestWorker::on_execution_finished, this, &AWLocaleApi::localeListCountriesCallback);
    connect(this, &AWLocaleApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<AWHttpRequestWorker*>().size() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void AWLocaleApi::localeListCountriesCallback(AWHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    AWCountryList output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit localeListCountriesSignal(output);
        emit localeListCountriesSignalFull(worker, output);
    } else {
        emit localeListCountriesSignalE(output, error_type, error_str);
        emit localeListCountriesSignalEFull(worker, error_type, error_str);
    }
}

void AWLocaleApi::localeListCountriesEU() {
    QString fullPath = QString(_serverConfigs["localeListCountriesEU"][_serverIndices.value("localeListCountriesEU")].URL()+"/locale/countries/eu");
    
    if (_apiKeys.contains("Project")) {
        addHeaders("Project",_apiKeys.find("Project").value());
    }
    
    if (_apiKeys.contains("JWT")) {
        addHeaders("JWT",_apiKeys.find("JWT").value());
    }
    
    AWHttpRequestWorker *worker = new AWHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    AWHttpRequestInput input(fullPath, "GET");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &AWHttpRequestWorker::on_execution_finished, this, &AWLocaleApi::localeListCountriesEUCallback);
    connect(this, &AWLocaleApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<AWHttpRequestWorker*>().size() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void AWLocaleApi::localeListCountriesEUCallback(AWHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    AWCountryList output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit localeListCountriesEUSignal(output);
        emit localeListCountriesEUSignalFull(worker, output);
    } else {
        emit localeListCountriesEUSignalE(output, error_type, error_str);
        emit localeListCountriesEUSignalEFull(worker, error_type, error_str);
    }
}

void AWLocaleApi::localeListCountriesPhones() {
    QString fullPath = QString(_serverConfigs["localeListCountriesPhones"][_serverIndices.value("localeListCountriesPhones")].URL()+"/locale/countries/phones");
    
    if (_apiKeys.contains("Project")) {
        addHeaders("Project",_apiKeys.find("Project").value());
    }
    
    if (_apiKeys.contains("JWT")) {
        addHeaders("JWT",_apiKeys.find("JWT").value());
    }
    
    AWHttpRequestWorker *worker = new AWHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    AWHttpRequestInput input(fullPath, "GET");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &AWHttpRequestWorker::on_execution_finished, this, &AWLocaleApi::localeListCountriesPhonesCallback);
    connect(this, &AWLocaleApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<AWHttpRequestWorker*>().size() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void AWLocaleApi::localeListCountriesPhonesCallback(AWHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    AWPhoneList output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit localeListCountriesPhonesSignal(output);
        emit localeListCountriesPhonesSignalFull(worker, output);
    } else {
        emit localeListCountriesPhonesSignalE(output, error_type, error_str);
        emit localeListCountriesPhonesSignalEFull(worker, error_type, error_str);
    }
}

void AWLocaleApi::localeListCurrencies() {
    QString fullPath = QString(_serverConfigs["localeListCurrencies"][_serverIndices.value("localeListCurrencies")].URL()+"/locale/currencies");
    
    if (_apiKeys.contains("Project")) {
        addHeaders("Project",_apiKeys.find("Project").value());
    }
    
    if (_apiKeys.contains("JWT")) {
        addHeaders("JWT",_apiKeys.find("JWT").value());
    }
    
    AWHttpRequestWorker *worker = new AWHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    AWHttpRequestInput input(fullPath, "GET");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &AWHttpRequestWorker::on_execution_finished, this, &AWLocaleApi::localeListCurrenciesCallback);
    connect(this, &AWLocaleApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<AWHttpRequestWorker*>().size() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void AWLocaleApi::localeListCurrenciesCallback(AWHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    AWCurrencyList output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit localeListCurrenciesSignal(output);
        emit localeListCurrenciesSignalFull(worker, output);
    } else {
        emit localeListCurrenciesSignalE(output, error_type, error_str);
        emit localeListCurrenciesSignalEFull(worker, error_type, error_str);
    }
}

void AWLocaleApi::localeListLanguages() {
    QString fullPath = QString(_serverConfigs["localeListLanguages"][_serverIndices.value("localeListLanguages")].URL()+"/locale/languages");
    
    if (_apiKeys.contains("Project")) {
        addHeaders("Project",_apiKeys.find("Project").value());
    }
    
    if (_apiKeys.contains("JWT")) {
        addHeaders("JWT",_apiKeys.find("JWT").value());
    }
    
    AWHttpRequestWorker *worker = new AWHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    AWHttpRequestInput input(fullPath, "GET");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &AWHttpRequestWorker::on_execution_finished, this, &AWLocaleApi::localeListLanguagesCallback);
    connect(this, &AWLocaleApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<AWHttpRequestWorker*>().size() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void AWLocaleApi::localeListLanguagesCallback(AWHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    AWLanguageList output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit localeListLanguagesSignal(output);
        emit localeListLanguagesSignalFull(worker, output);
    } else {
        emit localeListLanguagesSignalE(output, error_type, error_str);
        emit localeListLanguagesSignalEFull(worker, error_type, error_str);
    }
}

void AWLocaleApi::tokenAvailable(){

    oauthToken token;
    switch (_OauthMethod) {
    case 1: //implicit flow
        token = _implicitFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _implicitFlow.removeToken(_latestScope.join(" "));
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    case 2: //authorization flow
        token = _authFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _authFlow.removeToken(_latestScope.join(" "));
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    case 3: //client credentials flow
        token = _credentialFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _credentialFlow.removeToken(_latestScope.join(" "));
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    case 4: //resource owner password flow
        token = _passwordFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _credentialFlow.removeToken(_latestScope.join(" "));
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    default:
        qDebug() << "No Oauth method set!";
        break;
    }
}
} // namespace OpenAPI
