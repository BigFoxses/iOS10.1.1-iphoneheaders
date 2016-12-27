/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/AssetExplorer.bundle/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXObservable.h>

@class NSMutableArray, NSMutableDictionary;

@interface AEPackageTransport : PXObservable {

	NSMutableArray* __stagedIdentifiersInOrder;
	NSMutableDictionary* __stagedPackagesByIdentifier;

}

@property (nonatomic,readonly) NSMutableArray * _stagedIdentifiersInOrder;                     //@synthesize _stagedIdentifiersInOrder=__stagedIdentifiersInOrder - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _stagedPackagesByIdentifier;              //@synthesize _stagedPackagesByIdentifier=__stagedPackagesByIdentifier - In the implementation block
-(NSMutableArray *)_stagedIdentifiersInOrder;
-(id)stagedPackageForIdentifier:(id)arg1 ;
-(id)orderedStagedIdentifiers;
-(NSMutableDictionary *)_stagedPackagesByIdentifier;
-(void)unstagePackageWithIdentifier:(id)arg1 ;
-(void)unstagePackagesWithIdentifiers:(id)arg1 ;
-(id)packagesWithLivePhotoContent;
-(void)_addPackageToStaging:(id)arg1 ;
-(id)stagedPackages;
-(void)stagePackages:(id)arg1 ;
-(void)_removePackageFromStagingWithIdentifier:(id)arg1 ;
-(void)commitPackage:(id)arg1 ;
-(void)stagePackage:(id)arg1 ;
-(id)init;
-(void)performChanges:(/*^block*/id)arg1 ;
-(id)mutableChangeObject;
-(void)reportError:(id)arg1 ;
@end
