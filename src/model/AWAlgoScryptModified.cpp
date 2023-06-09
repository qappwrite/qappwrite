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

#include "AWAlgoScryptModified.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "src/AWHelpers.h"

namespace OpenAPI {

AWAlgoScryptModified::AWAlgoScryptModified(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

AWAlgoScryptModified::AWAlgoScryptModified() {
    this->initializeModel();
}

AWAlgoScryptModified::~AWAlgoScryptModified() {}

void AWAlgoScryptModified::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_salt_isSet = false;
    m_salt_isValid = false;

    m_salt_separator_isSet = false;
    m_salt_separator_isValid = false;

    m_signer_key_isSet = false;
    m_signer_key_isValid = false;
}

void AWAlgoScryptModified::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void AWAlgoScryptModified::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::OpenAPI::fromJsonValue(type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_salt_isValid = ::OpenAPI::fromJsonValue(salt, json[QString("salt")]);
    m_salt_isSet = !json[QString("salt")].isNull() && m_salt_isValid;

    m_salt_separator_isValid = ::OpenAPI::fromJsonValue(salt_separator, json[QString("saltSeparator")]);
    m_salt_separator_isSet = !json[QString("saltSeparator")].isNull() && m_salt_separator_isValid;

    m_signer_key_isValid = ::OpenAPI::fromJsonValue(signer_key, json[QString("signerKey")]);
    m_signer_key_isSet = !json[QString("signerKey")].isNull() && m_signer_key_isValid;
}

QString AWAlgoScryptModified::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject AWAlgoScryptModified::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(type));
    }
    if (m_salt_isSet) {
        obj.insert(QString("salt"), ::OpenAPI::toJsonValue(salt));
    }
    if (m_salt_separator_isSet) {
        obj.insert(QString("saltSeparator"), ::OpenAPI::toJsonValue(salt_separator));
    }
    if (m_signer_key_isSet) {
        obj.insert(QString("signerKey"), ::OpenAPI::toJsonValue(signer_key));
    }
    return obj;
}

QString AWAlgoScryptModified::getType() const {
    return type;
}
void AWAlgoScryptModified::setType(const QString &type) {
    this->type = type;
    this->m_type_isSet = true;
}

bool AWAlgoScryptModified::is_type_Set() const{
    return m_type_isSet;
}

bool AWAlgoScryptModified::is_type_Valid() const{
    return m_type_isValid;
}

QString AWAlgoScryptModified::getSalt() const {
    return salt;
}
void AWAlgoScryptModified::setSalt(const QString &salt) {
    this->salt = salt;
    this->m_salt_isSet = true;
}

bool AWAlgoScryptModified::is_salt_Set() const{
    return m_salt_isSet;
}

bool AWAlgoScryptModified::is_salt_Valid() const{
    return m_salt_isValid;
}

QString AWAlgoScryptModified::getSaltSeparator() const {
    return salt_separator;
}
void AWAlgoScryptModified::setSaltSeparator(const QString &salt_separator) {
    this->salt_separator = salt_separator;
    this->m_salt_separator_isSet = true;
}

bool AWAlgoScryptModified::is_salt_separator_Set() const{
    return m_salt_separator_isSet;
}

bool AWAlgoScryptModified::is_salt_separator_Valid() const{
    return m_salt_separator_isValid;
}

QString AWAlgoScryptModified::getSignerKey() const {
    return signer_key;
}
void AWAlgoScryptModified::setSignerKey(const QString &signer_key) {
    this->signer_key = signer_key;
    this->m_signer_key_isSet = true;
}

bool AWAlgoScryptModified::is_signer_key_Set() const{
    return m_signer_key_isSet;
}

bool AWAlgoScryptModified::is_signer_key_Valid() const{
    return m_signer_key_isValid;
}

bool AWAlgoScryptModified::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_salt_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_salt_separator_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_signer_key_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool AWAlgoScryptModified::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_salt_isValid && m_salt_separator_isValid && m_signer_key_isValid && true;
}

} // namespace OpenAPI
