/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class ISSoftwareApplication, NSNumber, NSString;

@interface SUScriptSoftwareApplication : SUScriptObject {

	ISSoftwareApplication* _application;

}

@property (readonly) NSNumber * adamID; 
@property (readonly) NSString * bundleID; 
@property (readonly) NSString * bundleShortVersionString; 
@property (readonly) NSString * bundleVersion; 
@property (readonly) NSNumber * dsID; 
@property (readonly) NSNumber * ratingRank; 
@property (readonly) NSString * ratingSystem; 
@property (readonly) NSString * softwareType; 
@property (readonly) NSString * storeFrontID; 
@property (readonly) NSNumber * versionID; 
@property (readonly) NSString * environmentProduction; 
@property (readonly) NSString * environmentSandbox; 
@property (readonly) long long launchResultApplicationDisabled; 
@property (readonly) long long launchResultApplicationNotFound; 
@property (readonly) long long launchResultInvalidArgument; 
@property (readonly) long long launchResultLaunchOrSuspendInProgress; 
@property (readonly) long long launchResultLocked; 
@property (readonly) long long launchResultLockedOut; 
@property (readonly) long long launchResultSecurityPolicy; 
@property (readonly) long long launchResultSpringBoardUnavailable; 
@property (readonly) long long launchResultSuccess; 
@property (readonly) long long launchResultSyncing; 
@property (readonly) NSString * softwareTypeNewsstand; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(void)dealloc;
-(id)initWithApplication:(id)arg1 ;
-(NSString *)bundleVersion;
-(id)attributeKeys;
-(NSString *)ratingSystem;
-(NSString *)environmentSandbox;
-(NSString *)bundleShortVersionString;
-(NSString *)softwareType;
-(void)checkInAppPurchaseQueueWithAccountID:(id)arg1 environment:(id)arg2 ;
-(long long)launchWithURL:(id)arg1 options:(id)arg2 suspended:(id)arg3 ;
-(NSNumber *)dsID;
-(NSNumber *)ratingRank;
-(NSNumber *)versionID;
-(NSString *)environmentProduction;
-(long long)launchResultApplicationDisabled;
-(long long)launchResultApplicationNotFound;
-(long long)launchResultInvalidArgument;
-(long long)launchResultLaunchOrSuspendInProgress;
-(long long)launchResultLocked;
-(long long)launchResultLockedOut;
-(long long)launchResultSecurityPolicy;
-(long long)launchResultSpringBoardUnavailable;
-(long long)launchResultSuccess;
-(long long)launchResultSyncing;
-(NSString *)softwareTypeNewsstand;
-(id)scriptAttributeKeys;
-(id)_className;
-(NSNumber *)adamID;
-(NSString *)storeFrontID;
-(NSString *)bundleID;
@end

