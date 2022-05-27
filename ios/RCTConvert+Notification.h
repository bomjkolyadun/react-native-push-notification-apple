//
//  RCTConvert+Notification.h
//  Pods
//
//  Created by Jesse Katsumata on 2020/11/25.
//

#import <React/RCTConvert.h>
#import <React/RCTUtils.h>
#import <UserNotifications/UserNotifications.h>

@interface RCTConvert (NSCalendarUnit)
+ (NSCalendarUnit)NSCalendarUnit:(id)json;
@end

@interface RCTConvert (UNNotificationRequest)
+ (UNNotificationRequest *)UNNotificationRequest:(id)json;
+ (NSDictionary *)RCTFormatUNNotificationRequest:(UNNotificationRequest *)request;
@end

@interface RCTConvert (UNNotificationAction)
+ (UNNotificationAction *)UNNotificationAction:(id)json;
@end

@interface RCTConvert (UNNotificationActionOptions)
+ (UNNotificationActionOptions *)UNNotificationActionOptions:(id)json;
@end

@interface RCTConvert (UNNotificationCategory)
+ (UNNotificationCategory *)UNNotificationCategory:(id)json;
@end


@interface RCTConvert (UNNotificationResponse)
+ (NSDictionary *)RCTFormatUNNotificationResponse:(UNNotificationResponse *)response;
@end

@interface RCTConvert (UNNotification)
+ (NSDictionary *)RCTFormatUNNotification:(UNNotification *)notification;
@end


