//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSString;

@interface TBSNSGroupInfoItem : TBModel
{
    unsigned long long _categoryID;
    NSString *_categoryName;
    BOOL _didServiceHadLoaded;
}

@property(nonatomic) BOOL didServiceHadLoaded; // @synthesize didServiceHadLoaded=_didServiceHadLoaded;
@property(retain, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(nonatomic) unsigned long long categoryID; // @synthesize categoryID=_categoryID;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end
