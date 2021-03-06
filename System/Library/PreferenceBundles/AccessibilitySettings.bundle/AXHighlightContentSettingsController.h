/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSArray;

@interface AXHighlightContentSettingsController : PSListController {

	BOOL _contentHighlightItemsHidden;
	BOOL _sentenceHighlightItemsHidden;
	NSArray* _contentHighlightItems;
	NSArray* _sentenceHighlightItems;

}

@property (nonatomic,retain) NSArray * contentHighlightItems;                                                       //@synthesize contentHighlightItems=_contentHighlightItems - In the implementation block
@property (nonatomic,retain) NSArray * sentenceHighlightItems;                                                      //@synthesize sentenceHighlightItems=_sentenceHighlightItems - In the implementation block
@property (assign,getter=areContentHighlightItemsHidden,nonatomic) BOOL contentHighlightItemsHidden;                //@synthesize contentHighlightItemsHidden=_contentHighlightItemsHidden - In the implementation block
@property (assign,getter=areSentenceHighlightItemsHidden,nonatomic) BOOL sentenceHighlightItemsHidden;              //@synthesize sentenceHighlightItemsHidden=_sentenceHighlightItemsHidden - In the implementation block
-(void)setHighlightEnabled:(id)arg1 specifier:(id)arg2 ;
-(BOOL)areContentHighlightItemsHidden;
-(void)setContentHighlightItemsHidden:(BOOL)arg1 ;
-(void)setHighlightSettingsItemsHidden:(BOOL)arg1 ;
-(NSArray *)sentenceHighlightItems;
-(void)setSentenceHighlightItems:(NSArray *)arg1 ;
-(NSArray *)contentHighlightItems;
-(void)setContentHighlightItems:(NSArray *)arg1 ;
-(void)setSentenceHighlightItemsHidden:(BOOL)arg1 ;
-(id)highlightEnabled:(id)arg1 ;
-(BOOL)areSentenceHighlightItemsHidden;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)updateLayout;
-(void)willBecomeActive;
-(id)specifiers;
@end

