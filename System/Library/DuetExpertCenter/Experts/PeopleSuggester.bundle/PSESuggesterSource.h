/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DuetExpertCenter/Experts/PeopleSuggester.bundle/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PeopleSuggester/PSESource.h>

@protocol _CDInteractionQuerying, _CDInteractionAdvising;
@class _CDPeopleSuggester;

@interface PSESuggesterSource : PSESource {

	id<_CDInteractionQuerying> _querier;
	id<_CDInteractionAdvising> _advisor;
	_CDPeopleSuggester* _suggester;

}

@property (nonatomic,readonly) id<_CDInteractionQuerying> querier;              //@synthesize querier=_querier - In the implementation block
@property (nonatomic,readonly) id<_CDInteractionAdvising> advisor;              //@synthesize advisor=_advisor - In the implementation block
@property (nonatomic,readonly) _CDPeopleSuggester * suggester;                  //@synthesize suggester=_suggester - In the implementation block
+(id)sharedInstance;
-(id)peopleWithLimit:(unsigned long long)arg1 consumer:(unsigned long long)arg2 ;
-(void)_setupSuggester;
-(id<_CDInteractionQuerying>)querier;
-(id<_CDInteractionAdvising>)advisor;
-(void)_constrainMechanismForConsumer:(unsigned long long)arg1 ;
-(void)_receiveSourceChanged:(id)arg1 ;
-(id)_suggestGivenCurrentContextLimitedTo:(unsigned long long)arg1 ;
-(_CDPeopleSuggester *)suggester;
-(id)init;
@end

