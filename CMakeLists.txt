cmake_minimum_required(VERSION 3.2)

project(QAppWrite)

find_package(Qt6 REQUIRED COMPONENTS Core Network Gui)

include(GNUInstallDirs)
include(CMakePackageConfigHelpers)

add_library(${PROJECT_NAME}
# HEADERS:

  src/model/AWAccountCreateEmailSessionRequest.h
  src/model/AWAccountCreateMagicURLSessionRequest.h
  src/model/AWAccountCreatePhoneSessionRequest.h
  src/model/AWAccountCreateRecoveryRequest.h
  src/model/AWAccountCreateRequest.h
  src/model/AWAccountCreateVerificationRequest.h
  src/model/AWAccountUpdateEmailRequest.h
  src/model/AWAccountUpdateMagicURLSessionRequest.h
  src/model/AWAccountUpdateNameRequest.h
  src/model/AWAccountUpdatePasswordRequest.h
  src/model/AWAccountUpdatePhoneRequest.h
  src/model/AWAccountUpdatePhoneSessionRequest.h
  src/model/AWAccountUpdatePhoneVerificationRequest.h
  src/model/AWAccountUpdatePrefsRequest.h
  src/model/AWAccountUpdateRecoveryRequest.h
  src/model/AWAccountUpdateVerificationRequest.h
  src/model/AWAlgoArgon2.h
  src/model/AWAlgoBcrypt.h
  src/model/AWAlgoMd5.h
  src/model/AWAlgoPhpass.h
  src/model/AWAlgoScrypt.h
  src/model/AWAlgoScryptModified.h
  src/model/AWAlgoSha.h
  src/model/AWContinent.h
  src/model/AWContinentList.h
  src/model/AWCountry.h
  src/model/AWCountryList.h
  src/model/AWCurrency.h
  src/model/AWCurrencyList.h
  src/model/AWDatabasesCreateDocumentRequest.h
  src/model/AWDatabasesUpdateDocumentRequest.h
  src/model/AWDocument.h
  src/model/AWDocumentList.h
  src/model/AWError.h
  src/model/AWExecution.h
  src/model/AWExecutionList.h
  src/model/AWFileEx.h
  src/model/AWFileList.h
  src/model/AWFunctionsCreateExecutionRequest.h
  src/model/AWJwt.h
  src/model/AWLanguage.h
  src/model/AWLanguageList.h
  src/model/AWLocale.h
  src/model/AWLog.h
  src/model/AWLogList.h
  src/model/AWMembership.h
  src/model/AWMembershipList.h
  src/model/AWPhone.h
  src/model/AWPhoneList.h
  src/model/AWSession.h
  src/model/AWSessionList.h
  src/model/AWStorageUpdateFileRequest.h
  src/model/AWTeam.h
  src/model/AWTeamList.h
  src/model/AWTeamsCreateMembershipRequest.h
  src/model/AWTeamsCreateRequest.h
  src/model/AWTeamsUpdateMembershipRolesRequest.h
  src/model/AWTeamsUpdateMembershipStatusRequest.h
  src/model/AWTeamsUpdateNameRequest.h
  src/model/AWTeamsUpdatePrefsRequest.h
  src/model/AWToken.h
  src/model/AWUser.h
  src/model/AWUserHashOptionsInner_inner.h
  src/api/AWAccountApi.h
  src/api/AWAvatarsApi.h
  src/api/AWDatabasesApi.h
  src/api/AWFunctionsApi.h
  src/api/AWGraphqlApi.h
  src/api/AWLocaleApi.h
  src/api/AWStorageApi.h
  src/api/AWTeamsApi.h
  src/AWHelpers.h
  src/AWHttpRequest.h
  src/AWObject.h
  src/AWEnum.h
  src/AWHttpFileElement.h
  src/AWServerConfiguration.h
  src/AWServerVariable.h
  src/AWOauth.h

# SOURCES:

  src/model/AWAccountCreateEmailSessionRequest.cpp
  src/model/AWAccountCreateMagicURLSessionRequest.cpp
  src/model/AWAccountCreatePhoneSessionRequest.cpp
  src/model/AWAccountCreateRecoveryRequest.cpp
  src/model/AWAccountCreateRequest.cpp
  src/model/AWAccountCreateVerificationRequest.cpp
  src/model/AWAccountUpdateEmailRequest.cpp
  src/model/AWAccountUpdateMagicURLSessionRequest.cpp
  src/model/AWAccountUpdateNameRequest.cpp
  src/model/AWAccountUpdatePasswordRequest.cpp
  src/model/AWAccountUpdatePhoneRequest.cpp
  src/model/AWAccountUpdatePhoneSessionRequest.cpp
  src/model/AWAccountUpdatePhoneVerificationRequest.cpp
  src/model/AWAccountUpdatePrefsRequest.cpp
  src/model/AWAccountUpdateRecoveryRequest.cpp
  src/model/AWAccountUpdateVerificationRequest.cpp
  src/model/AWAlgoArgon2.cpp
  src/model/AWAlgoBcrypt.cpp
  src/model/AWAlgoMd5.cpp
  src/model/AWAlgoPhpass.cpp
  src/model/AWAlgoScrypt.cpp
  src/model/AWAlgoScryptModified.cpp
  src/model/AWAlgoSha.cpp
  src/model/AWContinent.cpp
  src/model/AWContinentList.cpp
  src/model/AWCountry.cpp
  src/model/AWCountryList.cpp
  src/model/AWCurrency.cpp
  src/model/AWCurrencyList.cpp
  src/model/AWDatabasesCreateDocumentRequest.cpp
  src/model/AWDatabasesUpdateDocumentRequest.cpp
  src/model/AWDocument.cpp
  src/model/AWDocumentList.cpp
  src/model/AWError.cpp
  src/model/AWExecution.cpp
  src/model/AWExecutionList.cpp
  src/model/AWFileEx.cpp
  src/model/AWFileList.cpp
  src/model/AWFunctionsCreateExecutionRequest.cpp
  src/model/AWJwt.cpp
  src/model/AWLanguage.cpp
  src/model/AWLanguageList.cpp
  src/model/AWLocale.cpp
  src/model/AWLog.cpp
  src/model/AWLogList.cpp
  src/model/AWMembership.cpp
  src/model/AWMembershipList.cpp
  src/model/AWPhone.cpp
  src/model/AWPhoneList.cpp
  src/model/AWSession.cpp
  src/model/AWSessionList.cpp
  src/model/AWStorageUpdateFileRequest.cpp
  src/model/AWTeam.cpp
  src/model/AWTeamList.cpp
  src/model/AWTeamsCreateMembershipRequest.cpp
  src/model/AWTeamsCreateRequest.cpp
  src/model/AWTeamsUpdateMembershipRolesRequest.cpp
  src/model/AWTeamsUpdateMembershipStatusRequest.cpp
  src/model/AWTeamsUpdateNameRequest.cpp
  src/model/AWTeamsUpdatePrefsRequest.cpp
  src/model/AWToken.cpp
  src/model/AWUser.cpp
  src/model/AWUserHashOptionsInner_inner.cpp
  src/api/AWAccountApi.cpp
  src/api/AWAvatarsApi.cpp
  src/api/AWDatabasesApi.cpp
  src/api/AWFunctionsApi.cpp
  src/api/AWGraphqlApi.cpp
  src/api/AWLocaleApi.cpp
  src/api/AWStorageApi.cpp
  src/api/AWTeamsApi.cpp
  src/AWHelpers.cpp
  src/AWHttpRequest.cpp
  src/AWHttpFileElement.cpp
  src/AWOauth.cpp
  )

target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

target_link_libraries(${PROJECT_NAME}
    PUBLIC
        Qt6::Core
        Qt6::Network
        Qt6::Gui

)

configure_package_config_file(${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in
    "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
    INSTALL_DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}"
)

install(
    TARGETS ${PROJECT_NAME}
    EXPORT ${PROJECT_NAME}Targets
    LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}"
    ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
    RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}"
    INCLUDES DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/${PROJECT_NAME}"
)

install(
    FILES ${HEADER_FILES}
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${PROJECT_NAME}
)

install(
    FILES "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}
)

install(
    EXPORT ${PROJECT_NAME}Targets
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}
)
