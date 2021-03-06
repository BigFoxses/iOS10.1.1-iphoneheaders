/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMPMediaEntity.h>

@class NSString, SACalendar, SAMPPlaybackInfo, SAMPReleaseInfo;

@interface SAMPMediaItem : SAMPMediaEntity

@property (nonatomic,copy) NSString * album; 
@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,retain) SACalendar * dateAdded; 
@property (nonatomic,retain) SACalendar * datePurchased; 
@property (nonatomic,copy) NSString * genre; 
@property (nonatomic,retain) SAMPPlaybackInfo * playbackInfo; 
@property (nonatomic,retain) SAMPReleaseInfo * releaseInfo; 
@property (nonatomic,copy) NSString * sortAlbum; 
@property (nonatomic,copy) NSString * sortArtist; 
+(id)mediaItemWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)mediaItem;
-(id)MPMediaItemRepresentation;
-(SAMPReleaseInfo *)releaseInfo;
-(void)setReleaseInfo:(SAMPReleaseInfo *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)sortArtist;
-(void)setSortArtist:(NSString *)arg1 ;
-(void)setDateAdded:(SACalendar *)arg1 ;
-(SACalendar *)datePurchased;
-(void)setDatePurchased:(SACalendar *)arg1 ;
-(void)setPlaybackInfo:(SAMPPlaybackInfo *)arg1 ;
-(NSString *)sortAlbum;
-(void)setSortAlbum:(NSString *)arg1 ;
-(SAMPPlaybackInfo *)playbackInfo;
-(NSString *)artist;
-(NSString *)genre;
-(void)setArtist:(NSString *)arg1 ;
-(void)setGenre:(NSString *)arg1 ;
-(SACalendar *)dateAdded;
-(NSString *)album;
-(void)setAlbum:(NSString *)arg1 ;
@end

