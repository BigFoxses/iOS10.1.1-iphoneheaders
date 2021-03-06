/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, IMTimer;

@interface IDSAppleRegistrationKeychainReader : NSObject {

	NSMutableArray* _registrationData;
	IMTimer* _purgeTimer;
	/*^block*/id _purgeCancelBlock;
	/*^block*/id _purgeEnqueueBlock;

}
+(id)sharedInstance;
+(id)keychainServiceForVersion:(unsigned long long)arg1 ;
+(id)keychainAccountForVersion:(unsigned long long)arg1 ;
+(id)keychainAccessGroupForVersion:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_reloadFromKeychainLocked;
-(void)_setPurgeTimer;
-(void)_reloadFromDictionaryLocked:(id)arg1 ;
-(id)registrationData;
-(id)registrationWithServiceType:(id)arg1 accountType:(int)arg2 value:(id)arg3 ;
-(void)_flush;
-(void)flushCache;
@end

