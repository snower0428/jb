//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSMutableArray, NSString, SBWeeApp, UIImage;

@interface SBBulletinListSection : NSObject
{
    NSString *_sectionID;
    unsigned int _sectionType;
    SBWeeApp *_weeApp;
    NSMutableArray *_bulletins;
    NSArray *_sortDescriptors;
    NSString *_displayName;
    UIImage *_iconImage;
    BOOL _displaysCriticalBulletins;
    NSDate *_lastSortDate;
}

@property(copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) SBWeeApp *weeApp; // @synthesize weeApp=_weeApp;
- (id)bulletinAtIndex:(unsigned int)arg1;
- (unsigned int)replaceBulletin:(id)arg1 withBulletin:(id)arg2;
- (unsigned int)removeBulletin:(id)arg1;
- (unsigned int)_removeBulletin:(id)arg1;
- (unsigned int)addBulletin:(id)arg1;
- (unsigned int)indexOfBulletinID:(id)arg1;
- (unsigned int)_indexForNewBulletin:(id)arg1;
- (int)compareSection:(id)arg1 forOrder:(unsigned int)arg2;
- (int)compare:(id)arg1;
- (void)dealloc;
- (id)initWithSectionInfo:(id)arg1;
- (BOOL)showsTodaysDate;
- (BOOL)displaysCriticalBulletins;
- (id)lastSortDate;
- (BOOL)hasClearableBulletins;
- (unsigned int)bulletinCount;
- (BOOL)isBulletinSection;
- (BOOL)isWeeAppSection;
- (id)description;

@end

