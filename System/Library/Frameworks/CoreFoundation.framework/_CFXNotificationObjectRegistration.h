/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/_CFXNotificationRegistrationContainer.h>

@interface _CFXNotificationObjectRegistration : _CFXNotificationRegistrationContainer {

	void* _object;

}

@property (readonly) void* object;              //@synthesize object=_object - In the implementation block
+(Class)childClass;
+(const SCD_Struct_CF1*)stringKeyCallbacks;
-(id)initWithObject:(void*)arg1 parent:(id)arg2 ;
-(id)acquireObserver:(void*)arg1 options:(unsigned long long)arg2 ;
-(void)find:(void*)arg1 matching:(SCD_Struct_CF10*)arg2 ;
-(void)match:(void*)arg1 matching:(SCD_Struct_CF10*)arg2 ;
-(void*)key;
-(void*)object;
-(BOOL)enumerate:(/*^block*/id)arg1 ;
@end

