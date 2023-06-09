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

#include "AWCurrency.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "src/AWHelpers.h"

namespace OpenAPI {

AWCurrency::AWCurrency(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

AWCurrency::AWCurrency() {
    this->initializeModel();
}

AWCurrency::~AWCurrency() {}

void AWCurrency::initializeModel() {

    m_symbol_isSet = false;
    m_symbol_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_symbol_native_isSet = false;
    m_symbol_native_isValid = false;

    m_decimal_digits_isSet = false;
    m_decimal_digits_isValid = false;

    m_rounding_isSet = false;
    m_rounding_isValid = false;

    m_code_isSet = false;
    m_code_isValid = false;

    m_name_plural_isSet = false;
    m_name_plural_isValid = false;
}

void AWCurrency::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void AWCurrency::fromJsonObject(QJsonObject json) {

    m_symbol_isValid = ::OpenAPI::fromJsonValue(symbol, json[QString("symbol")]);
    m_symbol_isSet = !json[QString("symbol")].isNull() && m_symbol_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_symbol_native_isValid = ::OpenAPI::fromJsonValue(symbol_native, json[QString("symbolNative")]);
    m_symbol_native_isSet = !json[QString("symbolNative")].isNull() && m_symbol_native_isValid;

    m_decimal_digits_isValid = ::OpenAPI::fromJsonValue(decimal_digits, json[QString("decimalDigits")]);
    m_decimal_digits_isSet = !json[QString("decimalDigits")].isNull() && m_decimal_digits_isValid;

    m_rounding_isValid = ::OpenAPI::fromJsonValue(rounding, json[QString("rounding")]);
    m_rounding_isSet = !json[QString("rounding")].isNull() && m_rounding_isValid;

    m_code_isValid = ::OpenAPI::fromJsonValue(code, json[QString("code")]);
    m_code_isSet = !json[QString("code")].isNull() && m_code_isValid;

    m_name_plural_isValid = ::OpenAPI::fromJsonValue(name_plural, json[QString("namePlural")]);
    m_name_plural_isSet = !json[QString("namePlural")].isNull() && m_name_plural_isValid;
}

QString AWCurrency::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject AWCurrency::asJsonObject() const {
    QJsonObject obj;
    if (m_symbol_isSet) {
        obj.insert(QString("symbol"), ::OpenAPI::toJsonValue(symbol));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    if (m_symbol_native_isSet) {
        obj.insert(QString("symbolNative"), ::OpenAPI::toJsonValue(symbol_native));
    }
    if (m_decimal_digits_isSet) {
        obj.insert(QString("decimalDigits"), ::OpenAPI::toJsonValue(decimal_digits));
    }
    if (m_rounding_isSet) {
        obj.insert(QString("rounding"), ::OpenAPI::toJsonValue(rounding));
    }
    if (m_code_isSet) {
        obj.insert(QString("code"), ::OpenAPI::toJsonValue(code));
    }
    if (m_name_plural_isSet) {
        obj.insert(QString("namePlural"), ::OpenAPI::toJsonValue(name_plural));
    }
    return obj;
}

QString AWCurrency::getSymbol() const {
    return symbol;
}
void AWCurrency::setSymbol(const QString &symbol) {
    this->symbol = symbol;
    this->m_symbol_isSet = true;
}

bool AWCurrency::is_symbol_Set() const{
    return m_symbol_isSet;
}

bool AWCurrency::is_symbol_Valid() const{
    return m_symbol_isValid;
}

QString AWCurrency::getName() const {
    return name;
}
void AWCurrency::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool AWCurrency::is_name_Set() const{
    return m_name_isSet;
}

bool AWCurrency::is_name_Valid() const{
    return m_name_isValid;
}

QString AWCurrency::getSymbolNative() const {
    return symbol_native;
}
void AWCurrency::setSymbolNative(const QString &symbol_native) {
    this->symbol_native = symbol_native;
    this->m_symbol_native_isSet = true;
}

bool AWCurrency::is_symbol_native_Set() const{
    return m_symbol_native_isSet;
}

bool AWCurrency::is_symbol_native_Valid() const{
    return m_symbol_native_isValid;
}

qint32 AWCurrency::getDecimalDigits() const {
    return decimal_digits;
}
void AWCurrency::setDecimalDigits(const qint32 &decimal_digits) {
    this->decimal_digits = decimal_digits;
    this->m_decimal_digits_isSet = true;
}

bool AWCurrency::is_decimal_digits_Set() const{
    return m_decimal_digits_isSet;
}

bool AWCurrency::is_decimal_digits_Valid() const{
    return m_decimal_digits_isValid;
}

double AWCurrency::getRounding() const {
    return rounding;
}
void AWCurrency::setRounding(const double &rounding) {
    this->rounding = rounding;
    this->m_rounding_isSet = true;
}

bool AWCurrency::is_rounding_Set() const{
    return m_rounding_isSet;
}

bool AWCurrency::is_rounding_Valid() const{
    return m_rounding_isValid;
}

QString AWCurrency::getCode() const {
    return code;
}
void AWCurrency::setCode(const QString &code) {
    this->code = code;
    this->m_code_isSet = true;
}

bool AWCurrency::is_code_Set() const{
    return m_code_isSet;
}

bool AWCurrency::is_code_Valid() const{
    return m_code_isValid;
}

QString AWCurrency::getNamePlural() const {
    return name_plural;
}
void AWCurrency::setNamePlural(const QString &name_plural) {
    this->name_plural = name_plural;
    this->m_name_plural_isSet = true;
}

bool AWCurrency::is_name_plural_Set() const{
    return m_name_plural_isSet;
}

bool AWCurrency::is_name_plural_Valid() const{
    return m_name_plural_isValid;
}

bool AWCurrency::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_symbol_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_symbol_native_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_decimal_digits_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_rounding_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_plural_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool AWCurrency::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_symbol_isValid && m_name_isValid && m_symbol_native_isValid && m_decimal_digits_isValid && m_rounding_isValid && m_code_isValid && m_name_plural_isValid && true;
}

} // namespace OpenAPI
