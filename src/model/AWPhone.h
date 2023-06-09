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
 * AWPhone.h
 *
 * Phone
 */

#ifndef AWPHONE_H
#define AWPHONE_H

#include <QJsonObject>

#include <QString>

#include "src/AWEnum.h"
#include "src/AWObject.h"

#include "src/AWGlobalExport.h"

namespace OpenAPI {

class APPWRITE_EXPORT AWPhone : public AWObject {
public:
    AWPhone();
    AWPhone(QString json);
    ~AWPhone() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getCode() const;
    void setCode(const QString &code);
    bool is_code_Set() const;
    bool is_code_Valid() const;

    QString getCountryCode() const;
    void setCountryCode(const QString &country_code);
    bool is_country_code_Set() const;
    bool is_country_code_Valid() const;

    QString getCountryName() const;
    void setCountryName(const QString &country_name);
    bool is_country_name_Set() const;
    bool is_country_name_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString code;
    bool m_code_isSet;
    bool m_code_isValid;

    QString country_code;
    bool m_country_code_isSet;
    bool m_country_code_isValid;

    QString country_name;
    bool m_country_name_isSet;
    bool m_country_name_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::AWPhone)

#endif // AWPHONE_H
