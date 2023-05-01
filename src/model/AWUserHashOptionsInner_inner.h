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
 * AWUserHashOptionsInner_inner.h
 *
 * 
 */

#ifndef AWUSERHASHOPTIONSINNER_INNER_H
#define AWUSERHASHOPTIONSINNER_INNER_H

#include <QJsonObject>

#include "src/model/AWAlgoArgon2.h"
#include "src/model/AWAlgoBcrypt.h"
#include "src/model/AWAlgoMd5.h"
#include "src/model/AWAlgoPhpass.h"
#include "src/model/AWAlgoScrypt.h"
#include "src/model/AWAlgoScryptModified.h"
#include "src/model/AWAlgoSha.h"
#include <QString>

#include "src/AWEnum.h"
#include "src/AWObject.h"

#include "src/AWGlobalExport.h"

namespace OpenAPI {

class APPWRITE_EXPORT AWUserHashOptionsInner_inner : public AWObject {
public:
    AWUserHashOptionsInner_inner();
    AWUserHashOptionsInner_inner(QString json);
    ~AWUserHashOptionsInner_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    qint32 getMemoryCost() const;
    void setMemoryCost(const qint32 &memory_cost);
    bool is_memory_cost_Set() const;
    bool is_memory_cost_Valid() const;

    qint32 getTimeCost() const;
    void setTimeCost(const qint32 &time_cost);
    bool is_time_cost_Set() const;
    bool is_time_cost_Valid() const;

    qint32 getThreads() const;
    void setThreads(const qint32 &threads);
    bool is_threads_Set() const;
    bool is_threads_Valid() const;

    qint32 getCostCpu() const;
    void setCostCpu(const qint32 &cost_cpu);
    bool is_cost_cpu_Set() const;
    bool is_cost_cpu_Valid() const;

    qint32 getCostMemory() const;
    void setCostMemory(const qint32 &cost_memory);
    bool is_cost_memory_Set() const;
    bool is_cost_memory_Valid() const;

    qint32 getCostParallel() const;
    void setCostParallel(const qint32 &cost_parallel);
    bool is_cost_parallel_Set() const;
    bool is_cost_parallel_Valid() const;

    qint32 getLength() const;
    void setLength(const qint32 &length);
    bool is_length_Set() const;
    bool is_length_Valid() const;

    QString getSalt() const;
    void setSalt(const QString &salt);
    bool is_salt_Set() const;
    bool is_salt_Valid() const;

    QString getSaltSeparator() const;
    void setSaltSeparator(const QString &salt_separator);
    bool is_salt_separator_Set() const;
    bool is_salt_separator_Valid() const;

    QString getSignerKey() const;
    void setSignerKey(const QString &signer_key);
    bool is_signer_key_Set() const;
    bool is_signer_key_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString type;
    bool m_type_isSet;
    bool m_type_isValid;

    qint32 memory_cost;
    bool m_memory_cost_isSet;
    bool m_memory_cost_isValid;

    qint32 time_cost;
    bool m_time_cost_isSet;
    bool m_time_cost_isValid;

    qint32 threads;
    bool m_threads_isSet;
    bool m_threads_isValid;

    qint32 cost_cpu;
    bool m_cost_cpu_isSet;
    bool m_cost_cpu_isValid;

    qint32 cost_memory;
    bool m_cost_memory_isSet;
    bool m_cost_memory_isValid;

    qint32 cost_parallel;
    bool m_cost_parallel_isSet;
    bool m_cost_parallel_isValid;

    qint32 length;
    bool m_length_isSet;
    bool m_length_isValid;

    QString salt;
    bool m_salt_isSet;
    bool m_salt_isValid;

    QString salt_separator;
    bool m_salt_separator_isSet;
    bool m_salt_separator_isValid;

    QString signer_key;
    bool m_signer_key_isSet;
    bool m_signer_key_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::AWUserHashOptionsInner_inner)

#endif // AWUSERHASHOPTIONSINNER_INNER_H