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

/*
 * AWAccountUpdatePasswordRequest.h
 *
 * 
 */

#ifndef AWACCOUNTUPDATEPASSWORDREQUEST_H
#define AWACCOUNTUPDATEPASSWORDREQUEST_H

#include <QJsonObject>

#include <QString>

#include "src/AWEnum.h"
#include "src/AWObject.h"

#include "src/AWGlobalExport.h"

namespace OpenAPI {

class APPWRITE_EXPORT AWAccountUpdatePasswordRequest : public AWObject {
public:
    AWAccountUpdatePasswordRequest();
    AWAccountUpdatePasswordRequest(QString json);
    ~AWAccountUpdatePasswordRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getPassword() const;
    void setPassword(const QString &password);
    bool is_password_Set() const;
    bool is_password_Valid() const;

    QString getOldPassword() const;
    void setOldPassword(const QString &old_password);
    bool is_old_password_Set() const;
    bool is_old_password_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString password;
    bool m_password_isSet;
    bool m_password_isValid;

    QString old_password;
    bool m_old_password_isSet;
    bool m_old_password_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::AWAccountUpdatePasswordRequest)

#endif // AWACCOUNTUPDATEPASSWORDREQUEST_H
