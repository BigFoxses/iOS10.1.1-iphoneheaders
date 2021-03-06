/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCConnectionManagerDelegate <NSObject>
@optional
-(void)discardConnection:(id)arg1;

@required
-(void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2;
-(void)connectionCallback:(id)arg1 isInitialConnection:(BOOL)arg2;
-(void)didEnableDuplication:(BOOL)arg1 activeConnection:(id)arg2;

@end

