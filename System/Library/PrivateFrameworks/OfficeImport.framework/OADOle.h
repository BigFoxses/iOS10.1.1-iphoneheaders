/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface OADOle : NSObject {

	BOOL mIconic;
	NSString* mCLSID;
	NSString* mAnsiUserType;
	NSString* mAnsiClipboardFormatName;
	unsigned mWinClipboardFormat;
	NSString* mMacClipboardFormat;
	NSString* mAnsiProgID;
	NSString* mUnicodeUserType;
	NSString* mUnicodeClipboardFormatName;
	NSString* mUnicodeProgID;
	id mObject;

}
+(BOOL)isProgIDChart:(id)arg1 ;
+(BOOL)isProgIDMathType:(id)arg1 ;
+(BOOL)isCLSIDSupported:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)object;
-(void)setObject:(id)arg1 ;
-(id)CLSID;
-(void)setCLSID:(id)arg1 ;
-(void)setAnsiUserType:(id)arg1 ;
-(void)setWinClipboardFormat:(unsigned)arg1 ;
-(void)setMacClipboardFormat:(id)arg1 ;
-(void)setAnsiClipboardFormatName:(id)arg1 ;
-(void)setAnsiProgID:(id)arg1 ;
-(void)setUnicodeUserType:(id)arg1 ;
-(void)setUnicodeClipboardFormatName:(id)arg1 ;
-(void)setUnicodeProgID:(id)arg1 ;
-(BOOL)iconic;
-(void)setIconic:(BOOL)arg1 ;
-(id)ansiUserType;
-(id)ansiClipboardFormatName;
-(unsigned)winClipboardFormat;
-(id)macClipboardFormat;
-(id)ansiProgID;
-(id)unicodeUserType;
-(id)unicodeClipboardFormatName;
-(id)unicodeProgID;
@end
