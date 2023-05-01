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

#include "AWAccountCreateRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "src/AWHelpers.h"

namespace OpenAPI {

AWAccountCreateRequest::AWAccountCreateRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

AWAccountCreateRequest::AWAccountCreateRequest() {
    this->initializeModel();
}

AWAccountCreateRequest::~AWAccountCreateRequest() {}

void AWAccountCreateRequest::initializeModel() {

    m_user_id_isSet = false;
    m_user_id_isValid = false;

    m_email_isSet = false;
    m_email_isValid = false;

    m_password_isSet = false;
    m_password_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;
}

void AWAccountCreateRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void AWAccountCreateRequest::fromJsonObject(QJsonObject json) {

    m_user_id_isValid = ::OpenAPI::fromJsonValue(user_id, json[QString("userId")]);
    m_user_id_isSet = !json[QString("userId")].isNull() && m_user_id_isValid;

    m_email_isValid = ::OpenAPI::fromJsonValue(email, json[QString("email")]);
    m_email_isSet = !json[QString("email")].isNull() && m_email_isValid;

    m_password_isValid = ::OpenAPI::fromJsonValue(password, json[QString("password")]);
    m_password_isSet = !json[QString("password")].isNull() && m_password_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;
}

QString AWAccountCreateRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject AWAccountCreateRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_user_id_isSet) {
        obj.insert(QString("userId"), ::OpenAPI::toJsonValue(user_id));
    }
    if (m_email_isSet) {
        obj.insert(QString("email"), ::OpenAPI::toJsonValue(email));
    }
    if (m_password_isSet) {
        obj.insert(QString("password"), ::OpenAPI::toJsonValue(password));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    return obj;
}

QString AWAccountCreateRequest::getUserId() const {
    return user_id;
}
void AWAccountCreateRequest::setUserId(const QString &user_id) {
    this->user_id = user_id;
    this->m_user_id_isSet = true;
}

bool AWAccountCreateRequest::is_user_id_Set() const{
    return m_user_id_isSet;
}

bool AWAccountCreateRequest::is_user_id_Valid() const{
    return m_user_id_isValid;
}

QString AWAccountCreateRequest::getEmail() const {
    return email;
}
void AWAccountCreateRequest::setEmail(const QString &email) {
    this->email = email;
    this->m_email_isSet = true;
}

bool AWAccountCreateRequest::is_email_Set() const{
    return m_email_isSet;
}

bool AWAccountCreateRequest::is_email_Valid() const{
    return m_email_isValid;
}

QString AWAccountCreateRequest::getPassword() const {
    return password;
}
void AWAccountCreateRequest::setPassword(const QString &password) {
    this->password = password;
    this->m_password_isSet = true;
}

bool AWAccountCreateRequest::is_password_Set() const{
    return m_password_isSet;
}

bool AWAccountCreateRequest::is_password_Valid() const{
    return m_password_isValid;
}

QString AWAccountCreateRequest::getName() const {
    return name;
}
void AWAccountCreateRequest::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool AWAccountCreateRequest::is_name_Set() const{
    return m_name_isSet;
}

bool AWAccountCreateRequest::is_name_Valid() const{
    return m_name_isValid;
}

bool AWAccountCreateRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_email_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_password_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool AWAccountCreateRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_user_id_isValid && m_email_isValid && m_password_isValid && true;
}

} // namespace OpenAPI