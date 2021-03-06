/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicProductTracklistTableViewController.h>

@class MusicLibraryAlbumsViewConfiguration, MPAVController;

@interface MusicProfileAlbumsViewController : MusicProductTracklistTableViewController {

	BOOL _collapseSections;
	MusicLibraryAlbumsViewConfiguration* _libraryAlbumsViewConfiguration;
	MPAVController* _player;

}

@property (nonatomic,readonly) MusicLibraryAlbumsViewConfiguration * libraryAlbumsViewConfiguration; 
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(id)initWithLibraryViewConfiguration:(id)arg1 ;
-(void)_updateCollapseSections;
-(MusicLibraryAlbumsViewConfiguration *)libraryAlbumsViewConfiguration;
-(void)_setCollapseSections:(BOOL)arg1 ;
-(long long)handleSelectionOfSectionHeaderForSectionEntityValueContext:(id)arg1 ;
-(void)tableViewDataDidReload;
@end

