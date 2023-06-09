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

#include "AWTeamList.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "src/AWHelpers.h"

namespace OpenAPI {

AWTeamList::AWTeamList(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

AWTeamList::AWTeamList() {
    this->initializeModel();
}

AWTeamList::~AWTeamList() {}

void AWTeamList::initializeModel() {

    m_total_isSet = false;
    m_total_isValid = false;

    m_teams_isSet = false;
    m_teams_isValid = false;
}

void AWTeamList::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void AWTeamList::fromJsonObject(QJsonObject json) {

    m_total_isValid = ::OpenAPI::fromJsonValue(total, json[QString("total")]);
    m_total_isSet = !json[QString("total")].isNull() && m_total_isValid;

    m_teams_isValid = ::OpenAPI::fromJsonValue(teams, json[QString("teams")]);
    m_teams_isSet = !json[QString("teams")].isNull() && m_teams_isValid;
}

QString AWTeamList::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject AWTeamList::asJsonObject() const {
    QJsonObject obj;
    if (m_total_isSet) {
        obj.insert(QString("total"), ::OpenAPI::toJsonValue(total));
    }
    if (teams.size() > 0) {
        obj.insert(QString("teams"), ::OpenAPI::toJsonValue(teams));
    }
    return obj;
}

qint32 AWTeamList::getTotal() const {
    return total;
}
void AWTeamList::setTotal(const qint32 &total) {
    this->total = total;
    this->m_total_isSet = true;
}

bool AWTeamList::is_total_Set() const{
    return m_total_isSet;
}

bool AWTeamList::is_total_Valid() const{
    return m_total_isValid;
}

QList<AWTeam> AWTeamList::getTeams() const {
    return teams;
}
void AWTeamList::setTeams(const QList<AWTeam> &teams) {
    this->teams = teams;
    this->m_teams_isSet = true;
}

bool AWTeamList::is_teams_Set() const{
    return m_teams_isSet;
}

bool AWTeamList::is_teams_Valid() const{
    return m_teams_isValid;
}

bool AWTeamList::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_total_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (teams.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool AWTeamList::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_total_isValid && m_teams_isValid && true;
}

} // namespace OpenAPI
