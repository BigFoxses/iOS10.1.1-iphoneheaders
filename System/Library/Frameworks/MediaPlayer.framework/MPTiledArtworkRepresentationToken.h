/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCopying;
@class NSArray;

@interface MPTiledArtworkRepresentationToken : NSObject {

	id<NSCopying> _revisionIdentifier;
	NSArray* _tileArtworkVisualIdenticalityIdentifiers;

}

@property (nonatomic,copy) id<NSCopying> revisionIdentifier;                                //@synthesize revisionIdentifier=_revisionIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * tileArtworkVisualIdenticalityIdentifiers;              //@synthesize tileArtworkVisualIdenticalityIdentifiers=_tileArtworkVisualIdenticalityIdentifiers - In the implementation block
-(id<NSCopying>)revisionIdentifier;
-(void)setRevisionIdentifier:(id<NSCopying>)arg1 ;
-(NSArray *)tileArtworkVisualIdenticalityIdentifiers;
-(void)setTileArtworkVisualIdenticalityIdentifiers:(NSArray *)arg1 ;
@end
