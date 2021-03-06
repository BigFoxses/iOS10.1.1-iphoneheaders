/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MIME-Structs.h>
#import <libobjc.A.dylib/NSCacheDelegate.h>

@class NSRecursiveLock, NSCache, MFWeakReferenceHolder, NSString;

@interface MFLazyCache : NSObject <NSCacheDelegate> {

	NSRecursiveLock* _lock;
	NSCache* _storage;
	MFWeakReferenceHolder* _delegate;
	struct {
		unsigned delegateRespondsToLazyCacheWillEvictObject : 1;
	}  _flags;

}

@property (__weak) id<MFLazyCacheDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<MFLazyCacheDelegate>)arg1 ;
-(void)dealloc;
-(void)removeAllObjects;
-(id<MFLazyCacheDelegate>)delegate;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(void)_exchangeOriginalValue:(id)arg1 forKey:(id)arg2 withValue:(id)arg3 ;
-(id)storedValueForKey:(id)arg1 ;
-(long long)waiterCountForKey:(id)arg1 ;
-(id)valueForKey:(id)arg1 valueGenerator:(/*^block*/id)arg2 ;
@end

