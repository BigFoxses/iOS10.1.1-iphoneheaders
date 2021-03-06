/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

@class NSString, CKContainer;

@interface LPiCloudSharingMetadataProviderSpecialization : LPMetadataProviderSpecialization {

	NSString* _applicationFromURL;
	NSString* _titleFromURL;
	CKContainer* _baseContainer;
	CKContainer* _applicationContainer;
	BOOL _canceled;

}
+(id)specializedMetadataProviderForURL:(id)arg1 ;
+(id)extractApplicationFromURL:(id)arg1 ;
+(id)extractTitleFromURL:(id)arg1 ;
+(id)applicationNameMap;
-(void)cancel;
-(void)start;
-(void)fail;
-(id)initWithURL:(id)arg1 applicationFromURL:(id)arg2 titleFromURL:(id)arg3 ;
-(id)entitlementForKey:(id)arg1 ;
-(BOOL)canUseCloudKit;
-(void)completeUsingApplication:(id)arg1 title:(id)arg2 ;
-(void)completeWithShareMetadata:(id)arg1 bundleIDs:(id)arg2 ;
-(id)applicationFromBundleIdentifiers:(id)arg1 containerIdentifier:(id)arg2 ;
-(id)iconFromShare:(id)arg1 ;
@end

