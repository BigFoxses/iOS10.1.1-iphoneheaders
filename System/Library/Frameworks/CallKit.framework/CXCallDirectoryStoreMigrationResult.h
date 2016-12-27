/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CXCallDirectoryStoreMigrationResult : NSObject {

	BOOL _requiresExtensionDisablement;
	BOOL _requiresExtensionSynchronization;
	long long _startingSchemaVersion;
	long long _endingSchemaVersion;

}

@property (assign,nonatomic) long long startingSchemaVersion;                    //@synthesize startingSchemaVersion=_startingSchemaVersion - In the implementation block
@property (assign,nonatomic) long long endingSchemaVersion;                      //@synthesize endingSchemaVersion=_endingSchemaVersion - In the implementation block
@property (assign,nonatomic) BOOL requiresExtensionDisablement;                  //@synthesize requiresExtensionDisablement=_requiresExtensionDisablement - In the implementation block
@property (assign,nonatomic) BOOL requiresExtensionSynchronization;              //@synthesize requiresExtensionSynchronization=_requiresExtensionSynchronization - In the implementation block
-(long long)startingSchemaVersion;
-(void)setStartingSchemaVersion:(long long)arg1 ;
-(void)setEndingSchemaVersion:(long long)arg1 ;
-(void)setRequiresExtensionDisablement:(BOOL)arg1 ;
-(void)setRequiresExtensionSynchronization:(BOOL)arg1 ;
-(long long)endingSchemaVersion;
-(BOOL)requiresExtensionDisablement;
-(BOOL)requiresExtensionSynchronization;
@end
