/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class DTAsyncCaller, NSMutableArray, NSString, NSMutableDictionary;

@interface COCDataCampusManager : XXUnknownSuperclass {
@private
	NSMutableDictionary* campusDictionary;
	NSString* callerKey;
	DTAsyncCaller* caller;
	NSString* predicateString;
	NSString* currentAgentId;
	NSMutableArray* indexArray;
	NSMutableDictionary* indexSchools;
	NSMutableArray* searchResult;
}
@property(retain, nonatomic) NSMutableArray* searchResult;
@property(retain, nonatomic) NSMutableDictionary* indexSchools;
@property(retain, nonatomic) NSMutableArray* indexArray;
@property(retain, nonatomic) NSString* currentAgentId;
@property(retain, nonatomic) NSString* predicateString;
@property(retain, nonatomic) NSMutableDictionary* campusDictionary;
@property(retain, nonatomic) DTAsyncCaller* caller;
@property(retain, nonatomic) NSString* callerKey;
+(id)sharedInstance;
+(BOOL)matching:(id)matching keyString:(id)string;
+(id)_campusIconDirectoryPath;
-(void).cxx_destruct;
-(id)schoolInfoWithAgentCode:(id)agentCode;
-(void)applyImage:(id)image withAgentCode:(id)agentCode uniqueCode:(id)code imageURL:(id)url;
-(id)iconImageWithAgentCode:(id)agentCode;
-(BOOL)diskCacheIconImage:(id)image withAgentCode:(id)agentCode uniqueCode:(id)code;
-(id)_imagePathWithAgentCode:(id)agentCode uniqueCode:(id)code;
-(id)_imagePathWithAgentCode:(id)agentCode;
-(id)campusWithCityCode:(id)cityCode keywords:(id)keywords;
-(id)campusIndexWithCityCode:(id)cityCode keywords:(id)keywords;
-(int)countOfCampusWithCityCode:(id)cityCode;
-(id)campusWithCityCode:(id)cityCode;
-(void)synchronizedCityAndCampusWithAgentCode:(id)agentCode completion:(id)completion;
-(void)synchronizedCampusWithCityCode:(id)cityCode completion:(id)completion;
-(id)_buildRequestWithAgentCode:(id)agentCode;
-(id)_buildRequestWithCityCode:(id)cityCode;
-(id)init;
-(void)_buildSortedSchoolIndexDictionaryWithCityCode:(id)cityCode;
-(void)_buildPinYinIndexWithPredicate:(id)predicate cityCode:(id)code;
-(id)_buildScanRangeWithTag:(id)tag;
-(void)_cleanupSearchResult;
-(void)cleanSearchResultTag;
@end
