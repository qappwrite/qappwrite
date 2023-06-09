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

#include "AWGraphqlApi.h"
#include "src/AWServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

AWGraphqlApi::AWGraphqlApi(const int timeOut)
    : _timeOut(timeOut),
      _manager(nullptr),
      _isResponseCompressionEnabled(false),
      _isRequestCompressionEnabled(false) {
    initializeServerConfigs();
}

AWGraphqlApi::~AWGraphqlApi() {
}

void AWGraphqlApi::initializeServerConfigs() {
    //Default server
    QList<AWServerConfiguration> defaultConf = QList<AWServerConfiguration>();
    //varying endpoint server
    defaultConf.append(AWServerConfiguration(
    QUrl("https://HOSTNAME/v1"),
    "No description provided",
    QMap<QString, AWServerVariable>()));
    _serverConfigs.insert("graphqlMutation", defaultConf);
    _serverIndices.insert("graphqlMutation", 0);
    _serverConfigs.insert("graphqlQuery", defaultConf);
    _serverIndices.insert("graphqlQuery", 0);
}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found
*/
int AWGraphqlApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value) {
    auto it = _serverConfigs.find(operation);
    if (it != _serverConfigs.end() && serverIndex < it.value().size()) {
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void AWGraphqlApi::setServerIndex(const QString &operation, int serverIndex) {
    if (_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size()) {
        _serverIndices[operation] = serverIndex;
    }
}

void AWGraphqlApi::setApiKey(const QString &apiKeyName, const QString &apiKey) {
    _apiKeys.insert(apiKeyName, apiKey);
}

void AWGraphqlApi::setBearerToken(const QString &token) {
    _bearerToken = token;
}

void AWGraphqlApi::setUsername(const QString &username) {
    _username = username;
}

void AWGraphqlApi::setPassword(const QString &password) {
    _password = password;
}


void AWGraphqlApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void AWGraphqlApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void AWGraphqlApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
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
int AWGraphqlApi::addServerConfiguration(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, AWServerVariable> &variables) {
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
void AWGraphqlApi::setNewServerForAllOperations(const QUrl &url, const QString &description, const QMap<QString, AWServerVariable> &variables) {
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
void AWGraphqlApi::setNewServer(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, AWServerVariable> &variables) {
    setServerIndex(operation, addServerConfiguration(operation, url, description, variables));
}

void AWGraphqlApi::addHeaders(const QString &key, const QString &value) {
    _defaultHeaders.insert(key, value);
}

void AWGraphqlApi::enableRequestCompression() {
    _isRequestCompressionEnabled = true;
}

void AWGraphqlApi::enableResponseCompression() {
    _isResponseCompressionEnabled = true;
}

void AWGraphqlApi::abortRequests() {
    emit abortRequestsSignal();
}

QString AWGraphqlApi::getParamStylePrefix(const QString &style) {
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

QString AWGraphqlApi::getParamStyleSuffix(const QString &style) {
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

QString AWGraphqlApi::getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode) {

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

void AWGraphqlApi::graphqlMutation() {
    QString fullPath = QString(_serverConfigs["graphqlMutation"][_serverIndices.value("graphqlMutation")].URL()+"/graphql/mutation");
    
    if (_apiKeys.contains("Project")) {
        addHeaders("Project",_apiKeys.find("Project").value());
    }
    
    if (_apiKeys.contains("JWT")) {
        addHeaders("JWT",_apiKeys.find("JWT").value());
    }
    
    AWHttpRequestWorker *worker = new AWHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    AWHttpRequestInput input(fullPath, "POST");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &AWHttpRequestWorker::on_execution_finished, this, &AWGraphqlApi::graphqlMutationCallback);
    connect(this, &AWGraphqlApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<AWHttpRequestWorker*>().size() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void AWGraphqlApi::graphqlMutationCallback(AWHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    QMap<QString, QJsonValue> output;
    QString json(worker->response);
    QByteArray array(json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject obj = doc.object();
    for (QString key : obj.keys()) {
        QJsonValue val;
        ::OpenAPI::fromJsonValue(val, obj[key]);
        output.insert(key, val);
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit graphqlMutationSignal(output);
        emit graphqlMutationSignalFull(worker, output);
    } else {
        emit graphqlMutationSignalE(output, error_type, error_str);
        emit graphqlMutationSignalEFull(worker, error_type, error_str);
    }
}

void AWGraphqlApi::graphqlQuery() {
    QString fullPath = QString(_serverConfigs["graphqlQuery"][_serverIndices.value("graphqlQuery")].URL()+"/graphql");
    
    if (_apiKeys.contains("Project")) {
        addHeaders("Project",_apiKeys.find("Project").value());
    }
    
    if (_apiKeys.contains("JWT")) {
        addHeaders("JWT",_apiKeys.find("JWT").value());
    }
    
    AWHttpRequestWorker *worker = new AWHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    AWHttpRequestInput input(fullPath, "POST");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &AWHttpRequestWorker::on_execution_finished, this, &AWGraphqlApi::graphqlQueryCallback);
    connect(this, &AWGraphqlApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<AWHttpRequestWorker*>().size() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void AWGraphqlApi::graphqlQueryCallback(AWHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    QMap<QString, QJsonValue> output;
    QString json(worker->response);
    QByteArray array(json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject obj = doc.object();
    for (QString key : obj.keys()) {
        QJsonValue val;
        ::OpenAPI::fromJsonValue(val, obj[key]);
        output.insert(key, val);
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit graphqlQuerySignal(output);
        emit graphqlQuerySignalFull(worker, output);
    } else {
        emit graphqlQuerySignalE(output, error_type, error_str);
        emit graphqlQuerySignalEFull(worker, error_type, error_str);
    }
}

void AWGraphqlApi::tokenAvailable(){

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
