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

#ifndef AWLOCALEAPI_H
#define AWLOCALEAPI_H

#include "src/AWHelpers.h"
#include "src/AWHttpRequest.h"
#include "src/AWServerConfiguration.h"
#include "src/AWOauth.h"

#include "src/model/AWContinentList.h"
#include "src/model/AWCountryList.h"
#include "src/model/AWCurrencyList.h"
#include "src/model/AWLanguageList.h"
#include "src/model/AWLocale.h"
#include "src/model/AWPhoneList.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

#include "src/AWGlobalExport.h"

namespace OpenAPI {

class APPWRITE_EXPORT AWLocaleApi : public QObject {
    Q_OBJECT

public:
    AWLocaleApi(const int timeOut = 0);
    ~AWLocaleApi();

    void initializeServerConfigs();
    int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
    void setServerIndex(const QString &operation, int serverIndex);
    void setApiKey(const QString &apiKeyName, const QString &apiKey);
    void setBearerToken(const QString &token);
    void setUsername(const QString &username);
    void setPassword(const QString &password);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void setNetworkAccessManager(QNetworkAccessManager* manager);
    int addServerConfiguration(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, AWServerVariable> &variables = QMap<QString, AWServerVariable>());
    void setNewServerForAllOperations(const QUrl &url, const QString &description = "", const QMap<QString, AWServerVariable> &variables =  QMap<QString, AWServerVariable>());
    void setNewServer(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, AWServerVariable> &variables =  QMap<QString, AWServerVariable>());
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();
    QString getParamStylePrefix(const QString &style);
    QString getParamStyleSuffix(const QString &style);
    QString getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode);


    void localeGet();


    void localeListContinents();


    void localeListCountries();


    void localeListCountriesEU();


    void localeListCountriesPhones();


    void localeListCurrencies();


    void localeListLanguages();


private:
    QMap<QString,int> _serverIndices;
    QMap<QString,QList<AWServerConfiguration>> _serverConfigs;
    QMap<QString, QString> _apiKeys;
    QString _bearerToken;
    QString _username;
    QString _password;
    int _timeOut;
    QString _workingDirectory;
    QNetworkAccessManager* _manager;
    QMap<QString, QString> _defaultHeaders;
    bool _isResponseCompressionEnabled;
    bool _isRequestCompressionEnabled;
    AWHttpRequestInput _latestInput;
    AWHttpRequestWorker *_latestWorker;
    QStringList _latestScope;
    OauthCode _authFlow;
    OauthImplicit _implicitFlow;
    OauthCredentials _credentialFlow;
    OauthPassword _passwordFlow;
    int _OauthMethod = 0;

    void localeGetCallback(AWHttpRequestWorker *worker);
    void localeListContinentsCallback(AWHttpRequestWorker *worker);
    void localeListCountriesCallback(AWHttpRequestWorker *worker);
    void localeListCountriesEUCallback(AWHttpRequestWorker *worker);
    void localeListCountriesPhonesCallback(AWHttpRequestWorker *worker);
    void localeListCurrenciesCallback(AWHttpRequestWorker *worker);
    void localeListLanguagesCallback(AWHttpRequestWorker *worker);

signals:

    void localeGetSignal(AWLocale summary);
    void localeListContinentsSignal(AWContinentList summary);
    void localeListCountriesSignal(AWCountryList summary);
    void localeListCountriesEUSignal(AWCountryList summary);
    void localeListCountriesPhonesSignal(AWPhoneList summary);
    void localeListCurrenciesSignal(AWCurrencyList summary);
    void localeListLanguagesSignal(AWLanguageList summary);

    void localeGetSignalFull(AWHttpRequestWorker *worker, AWLocale summary);
    void localeListContinentsSignalFull(AWHttpRequestWorker *worker, AWContinentList summary);
    void localeListCountriesSignalFull(AWHttpRequestWorker *worker, AWCountryList summary);
    void localeListCountriesEUSignalFull(AWHttpRequestWorker *worker, AWCountryList summary);
    void localeListCountriesPhonesSignalFull(AWHttpRequestWorker *worker, AWPhoneList summary);
    void localeListCurrenciesSignalFull(AWHttpRequestWorker *worker, AWCurrencyList summary);
    void localeListLanguagesSignalFull(AWHttpRequestWorker *worker, AWLanguageList summary);

    void localeGetSignalE(AWLocale summary, QNetworkReply::NetworkError error_type, QString error_str);
    void localeListContinentsSignalE(AWContinentList summary, QNetworkReply::NetworkError error_type, QString error_str);
    void localeListCountriesSignalE(AWCountryList summary, QNetworkReply::NetworkError error_type, QString error_str);
    void localeListCountriesEUSignalE(AWCountryList summary, QNetworkReply::NetworkError error_type, QString error_str);
    void localeListCountriesPhonesSignalE(AWPhoneList summary, QNetworkReply::NetworkError error_type, QString error_str);
    void localeListCurrenciesSignalE(AWCurrencyList summary, QNetworkReply::NetworkError error_type, QString error_str);
    void localeListLanguagesSignalE(AWLanguageList summary, QNetworkReply::NetworkError error_type, QString error_str);

    void localeGetSignalEFull(AWHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void localeListContinentsSignalEFull(AWHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void localeListCountriesSignalEFull(AWHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void localeListCountriesEUSignalEFull(AWHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void localeListCountriesPhonesSignalEFull(AWHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void localeListCurrenciesSignalEFull(AWHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void localeListLanguagesSignalEFull(AWHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif // AWLOCALEAPI_H
