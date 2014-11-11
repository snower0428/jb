//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTDomainObject.h"

#import "MTCategory.h"

@class NSArray, NSNumber, NSString;

@interface MTHomeCategory : MTDomainObject <MTCategory>
{
    BOOL _red;
    NSNumber *_categoryID;
    NSString *_name;
    NSString *_iconURL;
    NSNumber *_dealsCount;
    NSArray *_subCategoryList;
    NSNumber *_mainCategoryID;
    NSString *_mainName;
}

@property(retain, nonatomic) NSString *mainName; // @synthesize mainName=_mainName;
@property(retain, nonatomic) NSNumber *mainCategoryID; // @synthesize mainCategoryID=_mainCategoryID;
@property(retain, nonatomic) NSArray *subCategoryList; // @synthesize subCategoryList=_subCategoryList;
@property(nonatomic, getter=isRed) BOOL red; // @synthesize red=_red;
@property(retain, nonatomic) NSNumber *dealsCount; // @synthesize dealsCount=_dealsCount;
@property(copy, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *categoryID; // @synthesize categoryID=_categoryID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)setWithPersistentObject:(id)arg1;
- (void)setWithDictionary:(id)arg1;

@end
