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
 * AWAccountUpdatePhoneRequest.h
 *
 * 
 */

#ifndef AWACCOUNTUPDATEPHONEREQUEST_H
#define AWACCOUNTUPDATEPHONEREQUEST_H

#include <QJsonObject>

#include <QString>

#include "src/AWEnum.h"
#include "src/AWObject.h"

#include "src/AWGlobalExport.h"

namespace OpenAPI {

class APPWRITE_EXPORT AWAccountUpdatePhoneRequest : public AWObject {
public:
    AWAccountUpdatePhoneRequest();
    AWAccountUpdatePhoneRequest(QString json);
    ~AWAccountUpdatePhoneRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getPhone() const;
    void setPhone(const QString &phone);
    bool is_phone_Set() const;
    bool is_phone_Valid() const;

    QString getPassword() const;
    void setPassword(const QString &password);
    bool is_password_Set() const;
    bool is_password_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString phone;
    bool m_phone_isSet;
    bool m_phone_isValid;

    QString password;
    bool m_password_isSet;
    bool m_password_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::AWAccountUpdatePhoneRequest)

#endif // AWACCOUNTUPDATEPHONEREQUEST_H
