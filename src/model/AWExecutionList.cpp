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

#include "AWExecutionList.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "src/AWHelpers.h"

namespace OpenAPI {

AWExecutionList::AWExecutionList(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

AWExecutionList::AWExecutionList() {
    this->initializeModel();
}

AWExecutionList::~AWExecutionList() {}

void AWExecutionList::initializeModel() {

    m_total_isSet = false;
    m_total_isValid = false;

    m_executions_isSet = false;
    m_executions_isValid = false;
}

void AWExecutionList::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void AWExecutionList::fromJsonObject(QJsonObject json) {

    m_total_isValid = ::OpenAPI::fromJsonValue(total, json[QString("total")]);
    m_total_isSet = !json[QString("total")].isNull() && m_total_isValid;

    m_executions_isValid = ::OpenAPI::fromJsonValue(executions, json[QString("executions")]);
    m_executions_isSet = !json[QString("executions")].isNull() && m_executions_isValid;
}

QString AWExecutionList::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject AWExecutionList::asJsonObject() const {
    QJsonObject obj;
    if (m_total_isSet) {
        obj.insert(QString("total"), ::OpenAPI::toJsonValue(total));
    }
    if (executions.size() > 0) {
        obj.insert(QString("executions"), ::OpenAPI::toJsonValue(executions));
    }
    return obj;
}

qint32 AWExecutionList::getTotal() const {
    return total;
}
void AWExecutionList::setTotal(const qint32 &total) {
    this->total = total;
    this->m_total_isSet = true;
}

bool AWExecutionList::is_total_Set() const{
    return m_total_isSet;
}

bool AWExecutionList::is_total_Valid() const{
    return m_total_isValid;
}

QList<AWExecution> AWExecutionList::getExecutions() const {
    return executions;
}
void AWExecutionList::setExecutions(const QList<AWExecution> &executions) {
    this->executions = executions;
    this->m_executions_isSet = true;
}

bool AWExecutionList::is_executions_Set() const{
    return m_executions_isSet;
}

bool AWExecutionList::is_executions_Valid() const{
    return m_executions_isValid;
}

bool AWExecutionList::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_total_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (executions.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool AWExecutionList::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_total_isValid && m_executions_isValid && true;
}

} // namespace OpenAPI
