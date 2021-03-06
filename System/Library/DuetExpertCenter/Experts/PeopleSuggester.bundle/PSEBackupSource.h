/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DuetExpertCenter/Experts/PeopleSuggester.bundle/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PeopleSuggester/PSESource.h>

@class NSNumber, NSDate, _DECPrediction;

@interface PSEBackupSource : PSESource {

	NSNumber* _backupVersionNumber;
	NSDate* _backupDate;
	_DECPrediction* _backupPrediction;

}

@property (nonatomic,retain) NSNumber * backupVersionNumber;                 //@synthesize backupVersionNumber=_backupVersionNumber - In the implementation block
@property (nonatomic,retain) NSDate * backupDate;                            //@synthesize backupDate=_backupDate - In the implementation block
@property (nonatomic,retain) _DECPrediction * backupPrediction;              //@synthesize backupPrediction=_backupPrediction - In the implementation block
+(id)sharedInstance;
-(id)peopleWithLimit:(unsigned long long)arg1 consumer:(unsigned long long)arg2 ;
-(void)setBackupVersionNumber:(NSNumber *)arg1 ;
-(void)setBackupPrediction:(_DECPrediction *)arg1 ;
-(NSNumber *)backupVersionNumber;
-(void)setBackupDate:(NSDate *)arg1 ;
-(_DECPrediction *)backupPrediction;
-(NSDate *)backupDate;
@end

