/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <SafariServices/_SFPopoverSizingTableViewController.h>
#import <libobjc.A.dylib/SFReaderAppearanceFontSizeSelectorDelegate.h>
#import <libobjc.A.dylib/SFReaderAppearanceThemeSelectorTableViewCellDelegate.h>

@class WBSReaderFontManager, NSDictionary, UIImage, _SFReaderAppearanceViewController, NSString, WBSReaderFont;

@interface SFReaderAppearanceMainViewController : _SFPopoverSizingTableViewController <SFReaderAppearanceFontSizeSelectorDelegate, SFReaderAppearanceThemeSelectorTableViewCellDelegate> {

	WBSReaderFontManager* _fontManager;
	NSDictionary* _initialReaderConfiguration;
	long long _selectedFontIndex;
	UIImage* _checkmarkImage;
	_SFReaderAppearanceViewController* _ownerAppearanceViewController;
	NSString* _themeName;

}

@property (assign,nonatomic,__weak) _SFReaderAppearanceViewController * ownerAppearanceViewController;              //@synthesize ownerAppearanceViewController=_ownerAppearanceViewController - In the implementation block
@property (nonatomic,readonly) WBSReaderFont * selectedFont; 
@property (nonatomic,readonly) NSString * themeName;                                                                //@synthesize themeName=_themeName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(NSString *)themeName;
-(void)_determineSelectedValues;
-(long long)_themeFromThemeName:(id)arg1 ;
-(id)_themeNameFromTheme:(long long)arg1 ;
-(void)_determineSelectedTheme;
-(void)_determineSelectedFontIndex;
-(void)readerAppearanceFontSizeDidIncrease:(id)arg1 ;
-(void)readerAppearanceFontSizeDidDecrease:(id)arg1 ;
-(void)readerAppearanceThemeSelectorDidChangeTheme:(id)arg1 ;
-(id)initWithInitialReaderConfiguration:(id)arg1 fontManager:(id)arg2 ;
-(WBSReaderFont *)selectedFont;
-(_SFReaderAppearanceViewController *)ownerAppearanceViewController;
-(void)setOwnerAppearanceViewController:(_SFReaderAppearanceViewController *)arg1 ;
-(id)checkmarkImage;
@end

