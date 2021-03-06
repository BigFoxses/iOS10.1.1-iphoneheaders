/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class NSString, SAUIDecoratedText;

@interface SASTStockComparisonItem : AceObject <SASTTemplateItem>

@property (nonatomic,copy) NSString * stockValueFacet; 
@property (nonatomic,retain) SAUIDecoratedText * subtitle; 
@property (nonatomic,retain) SAUIDecoratedText * title; 
@property (nonatomic,retain) SAUIDecoratedText * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stockComparisonItem;
+(id)stockComparisonItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)title;
-(SAUIDecoratedText *)value;
-(void)setValue:(SAUIDecoratedText *)arg1 ;
-(void)setSubtitle:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)subtitle;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)stockValueFacet;
-(void)setStockValueFacet:(NSString *)arg1 ;
@end

