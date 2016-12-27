/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/UsageBundles/SafariUsageBundle.bundle/SafariUsageBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUsage/PSStorageReporting.h>

@class NSArray, NSMutableDictionary, NSString;

@interface SafariUsageBundleStorageReporter : NSObject <PSStorageReporting> {

	NSArray* _cachedBundleApps;
	NSMutableDictionary* _cachedCategorySizes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)usageDetailControllerClassForUsageBundleApp:(id)arg1 ;
-(unsigned long long)sizeFileAtPath:(id)arg1 ;
-(void)populateUsageBundleApps;
-(unsigned long long)_historyFileUsage;
-(BOOL)clearOfflineReadingListCacheWithError:(id*)arg1 ;
-(unsigned long long)totalWebsiteDataUsage;
-(id)usageBundleApps;
-(float)sizeForCategory:(id)arg1 ;
-(BOOL)allowDeletionForCategory:(id)arg1 ;
-(BOOL)deleteDataForCategory:(id)arg1 withError:(id*)arg2 ;
@end
