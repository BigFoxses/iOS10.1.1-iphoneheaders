/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Cydia/FilteredPackageListController.h>

@interface InstalledController : FilteredPackageListController {

	BOOL sectioned_;

}
-(id)navigationURL;
-(id)sectionsForPackages:(id)arg1 ;
-(void)useRecent;
-(void)modeChanged:(id)arg1 ;
-(void)useFilter:(id)arg1 ;
-(void)queueStatusDidChange;
-(void)queueButtonClicked;
-(id)referrerURL;
-(id)initWithDatabase:(id)arg1 ;
@end
