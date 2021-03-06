/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumberFormatter, NSString;

@interface SUScriptNumberFormatter : SUScriptObject {

	NSNumberFormatter* _numberFormatter;

}

@property (retain) NSString * localeIdentifier; 
@property (retain) NSString * style; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)style;
-(NSString *)localeIdentifier;
-(void)setStyle:(NSString *)arg1 ;
-(id)stringFromNumber:(id)arg1 ;
-(id)attributeKeys;
-(id)numberFromString:(id)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(id)scriptAttributeKeys;
@end

