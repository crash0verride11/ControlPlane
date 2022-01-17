#import <Foundation/Foundation.h>

#import <HockeySDK/HockeySDKEnums.h>

#import <HockeySDK/BITHockeyManager.h>
#import <HockeySDK/BITHockeyManagerDelegate.h>

#import <HockeySDK/BITHockeyAttachment.h>

#import <HockeySDK/BITCrashManager.h>
#import <HockeySDK/BITCrashManagerDelegate.h>
#import <HockeySDK/BITCrashDetails.h>
#import <HockeySDK/BITCrashMetaData.h>
#import <HockeySDK/BITCrashExceptionApplication.h>

#import <HockeySDK/BITSystemProfile.h>

#import <HockeySDK/BITFeedbackManager.h>
#import <HockeySDK/BITFeedbackWindowController.h>

#import <HockeySDK/BITMetricsManager.h>

// Notification message which HockeyManager is listening to, to retry requesting updated from the server
#define BITHockeyNetworkDidBecomeReachableNotification @"BITHockeyNetworkDidBecomeReachable"

extern NSString *const __attribute__((unused)) kBITDefaultUserID;
extern NSString *const __attribute__((unused)) kBITDefaultUserName;
extern NSString *const __attribute__((unused)) kBITDefaultUserEmail;

/**
 *  HockeySDK Crash Reporter error domain
 */
typedef NS_ENUM (NSInteger, BITCrashErrorReason) {
  /**
   *  Unknown error
   */
  BITCrashErrorUnknown,
  /**
   *  API Server rejected app version
   */
  BITCrashAPIAppVersionRejected,
  /**
   *  API Server returned empty response
   */
  BITCrashAPIReceivedEmptyResponse,
  /**
   *  Connection error with status code
   */
  BITCrashAPIErrorWithStatusCode
};
extern NSString *const __attribute__((unused)) kBITCrashErrorDomain;


/**
 *  HockeySDK Feedback error domain
 */
typedef NS_ENUM(NSInteger, BITFeedbackErrorReason) {
  /**
   *  Unknown error
   */
  BITFeedbackErrorUnknown,
  /**
   *  API Server returned invalid status
   */
  BITFeedbackAPIServerReturnedInvalidStatus,
  /**
   *  API Server returned invalid data
   */
  BITFeedbackAPIServerReturnedInvalidData,
  /**
   *  API Server returned empty response
   */
  BITFeedbackAPIServerReturnedEmptyResponse,
  /**
   *  Authorization secret missing
   */
  BITFeedbackAPIClientAuthorizationMissingSecret,
  /**
   *  No internet connection
   */
  BITFeedbackAPIClientCannotCreateConnection
};
extern NSString *const __attribute__((unused)) kBITFeedbackErrorDomain;


/**
 *  HockeySDK global error domain
 */
typedef NS_ENUM(NSInteger, BITHockeyErrorReason) {
  /**
   *  Unknown error
   */
  BITHockeyErrorUnknown
};
extern NSString *const __attribute__((unused)) kBITHockeyErrorDomain;
// HockeySDK
