/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/FMFBalloonProvider.bundle/FMFBalloonProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class IMHandle;


@protocol CKLocationSharingClient <NSObject>
@property (readonly) BOOL locationSharingHasExpired; 
@property (readonly) IMHandle * locationSharingHandle; 
@required
-(void)setLocationSharingDelegate:(id)arg1;
-(IMHandle *)locationSharingHandle;
-(BOOL)locationSharingHasExpired;

@end

