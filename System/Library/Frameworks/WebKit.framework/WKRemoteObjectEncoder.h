/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <Foundation/NSCoder.h>

@interface WKRemoteObjectEncoder : NSCoder {

	RefPtr<API::Dictionary>* _rootDictionary;
	Array* _objectStream;
	Dictionary* _currentDictionary;

}
-(BOOL)requiresSecureCoding;
-(id)init;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(BOOL)allowsKeyedCoding;
-(void)encodeInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeValueOfObjCType:(const char*)arg1 at:(const void*)arg2 ;
-(Dictionary*)rootObjectDictionary;
@end

