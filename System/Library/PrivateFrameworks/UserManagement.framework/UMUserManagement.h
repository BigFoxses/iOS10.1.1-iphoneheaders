/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UMUser;


@protocol UMUserManagement <NSObject>
@property (nonatomic,readonly) BOOL isMultiUser; 
@property (nonatomic,copy,readonly) UMUser * currentUser; 
@property (nonatomic,readonly) unsigned long long maxNumberOfUsers; 
@required
-(void)disableUser:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)canAccessUserProperties;
-(void)createUser:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)loadUser:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)registerUserListUpdateObserver:(id)arg1;
-(UMUser *)currentUser;
-(BOOL)isMultiUser;
-(void)deleteUser:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(unsigned long long)maxNumberOfUsers;

@end
