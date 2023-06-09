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

#ifndef AWGRAPHQLAPI_H
#define AWGRAPHQLAPI_H

#include "src/AWHelpers.h"
#include "src/AWHttpRequest.h"
#include "src/AWServerConfiguration.h"
#include "src/AWOauth.h"

#include <QJsonValue>
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

#include "src/AWGlobalExport.h"

namespace OpenAPI {

class APPWRITE_EXPORT AWGraphqlApi : public QObject {
    Q_OBJECT

public:
    AWGraphqlApi(const int timeOut = 0);
    ~AWGraphqlApi();

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


    void graphqlMutation();


    void graphqlQuery();


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

    void graphqlMutationCallback(AWHttpRequestWorker *worker);
    void graphqlQueryCallback(AWHttpRequestWorker *worker);

signals:

    void graphqlMutationSignal(QMap<QString, QJsonValue> summary);
    void graphqlQuerySignal(QMap<QString, QJsonValue> summary);

    void graphqlMutationSignalFull(AWHttpRequestWorker *worker, QMap<QString, QJsonValue> summary);
    void graphqlQuerySignalFull(AWHttpRequestWorker *worker, QMap<QString, QJsonValue> summary);

    void graphqlMutationSignalE(QMap<QString, QJsonValue> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void graphqlQuerySignalE(QMap<QString, QJsonValue> summary, QNetworkReply::NetworkError error_type, QString error_str);

    void graphqlMutationSignalEFull(AWHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void graphqlQuerySignalEFull(AWHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif // AWGRAPHQLAPI_H
