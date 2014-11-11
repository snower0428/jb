//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDefaultDateLabel.h"

#import "SBRelativeDateTimerDelegate.h"

@class SBRelativeDateTimer;

@interface SBRelativeDateLabel : SBDefaultDateLabel <SBRelativeDateTimerDelegate>
{
    SBRelativeDateTimer *_relativeDateTimer;
    unsigned int _value;
    int _resolution;
    int _comparedToNow;
}

- (void)timerFiredWithValue:(unsigned int)arg1 forResolution:(int)arg2 comparedToNow:(int)arg3;
- (id)constructLabelString;
- (void)prepareForReuse;
- (void)dealloc;
- (void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2;

@end

