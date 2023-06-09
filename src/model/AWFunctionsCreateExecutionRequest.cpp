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

#include "AWFunctionsCreateExecutionRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "src/AWHelpers.h"

namespace OpenAPI {

AWFunctionsCreateExecutionRequest::AWFunctionsCreateExecutionRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

AWFunctionsCreateExecutionRequest::AWFunctionsCreateExecutionRequest() {
    this->initializeModel();
}

AWFunctionsCreateExecutionRequest::~AWFunctionsCreateExecutionRequest() {}

void AWFunctionsCreateExecutionRequest::initializeModel() {

    m_data_isSet = false;
    m_data_isValid = false;

    m_async_isSet = false;
    m_async_isValid = false;
}

void AWFunctionsCreateExecutionRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void AWFunctionsCreateExecutionRequest::fromJsonObject(QJsonObject json) {

    m_data_isValid = ::OpenAPI::fromJsonValue(data, json[QString("data")]);
    m_data_isSet = !json[QString("data")].isNull() && m_data_isValid;

    m_async_isValid = ::OpenAPI::fromJsonValue(async, json[QString("async")]);
    m_async_isSet = !json[QString("async")].isNull() && m_async_isValid;
}

QString AWFunctionsCreateExecutionRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject AWFunctionsCreateExecutionRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_data_isSet) {
        obj.insert(QString("data"), ::OpenAPI::toJsonValue(data));
    }
    if (m_async_isSet) {
        obj.insert(QString("async"), ::OpenAPI::toJsonValue(async));
    }
    return obj;
}

QString AWFunctionsCreateExecutionRequest::getData() const {
    return data;
}
void AWFunctionsCreateExecutionRequest::setData(const QString &data) {
    this->data = data;
    this->m_data_isSet = true;
}

bool AWFunctionsCreateExecutionRequest::is_data_Set() const{
    return m_data_isSet;
}

bool AWFunctionsCreateExecutionRequest::is_data_Valid() const{
    return m_data_isValid;
}

bool AWFunctionsCreateExecutionRequest::isAsync() const {
    return async;
}
void AWFunctionsCreateExecutionRequest::setAsync(const bool &async) {
    this->async = async;
    this->m_async_isSet = true;
}

bool AWFunctionsCreateExecutionRequest::is_async_Set() const{
    return m_async_isSet;
}

bool AWFunctionsCreateExecutionRequest::is_async_Valid() const{
    return m_async_isValid;
}

bool AWFunctionsCreateExecutionRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_data_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_async_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool AWFunctionsCreateExecutionRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
