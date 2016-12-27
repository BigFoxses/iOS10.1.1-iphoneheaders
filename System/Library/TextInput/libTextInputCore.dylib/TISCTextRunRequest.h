/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:40:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libTextInputCore.dylib/libTextInputCore.dylib-Structs.h>
@class NSArray, NSString;

@interface TISCTextRunRequest : NSObject {

	NSArray* _strings;
	CGColorRef _color;
	double _maxFontSize;
	double _minFontSize;
	BOOL _allowTruncation;
	NSString* _truncationSentinel;
	unsigned long long _widthGroup;

}
+(id)textRunRequestWithStrings:(id)arg1 color:(CGColorRef)arg2 maxFontSize:(double)arg3 minFontSize:(double)arg4 allowTruncation:(BOOL)arg5 truncationSentinel:(id)arg6 widthGroup:(unsigned long long)arg7 ;
-(void)dealloc;
-(CGColorRef)color;
-(id)strings;
-(double)minFontSize;
-(double)maxFontSize;
-(id)truncationSentinel;
-(unsigned long long)widthGroup;
-(BOOL)allowTruncation;
@end
