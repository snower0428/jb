//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface EDAMSyncState : NSObject <NSCoding>
{
    long long __currentTime;
    long long __fullSyncBefore;
    int __updateCount;
    long long __uploaded;
    BOOL __currentTime_isset;
    BOOL __fullSyncBefore_isset;
    BOOL __updateCount_isset;
    BOOL __uploaded_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetUploaded;
- (BOOL)uploadedIsSet;
@property(nonatomic, getter=uploaded, setter=setUploaded:) long long uploaded; // @dynamic uploaded;
- (void)unsetUpdateCount;
- (BOOL)updateCountIsSet;
@property(nonatomic, getter=updateCount, setter=setUpdateCount:) int updateCount; // @dynamic updateCount;
- (void)unsetFullSyncBefore;
- (BOOL)fullSyncBeforeIsSet;
@property(nonatomic, getter=fullSyncBefore, setter=setFullSyncBefore:) long long fullSyncBefore; // @dynamic fullSyncBefore;
- (void)unsetCurrentTime;
- (BOOL)currentTimeIsSet;
@property(nonatomic, getter=currentTime, setter=setCurrentTime:) long long currentTime; // @dynamic currentTime;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentTime:(long long)arg1 fullSyncBefore:(long long)arg2 updateCount:(int)arg3 uploaded:(long long)arg4;

@end

