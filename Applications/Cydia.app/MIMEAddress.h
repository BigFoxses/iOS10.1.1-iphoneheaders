/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Cydia/Cydia-Structs.h>
@interface MIMEAddress : NSObject {

	MenesObjectHandle<NSString, 0> name_;
	MenesObjectHandle<NSString, 0> address_;

}
+(id)_attributeKeys;
+(id)addressWithString:(id)arg1 ;
+(char)isKeyExcludedFromWebScript:(const char*)arg1 ;
-(id)name;
-(id)initWithString:(id)arg1 ;
-(void)setAddress:(id)arg1 ;
-(id)attributeKeys;
-(id)address;
@end

