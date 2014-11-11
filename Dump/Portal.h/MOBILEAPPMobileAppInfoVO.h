/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface MOBILEAPPMobileAppInfoVO : XXUnknownSuperclass {
@private
	BOOL _display;
	BOOL _canDelete;
	BOOL _alipayApp;
	BOOL _needAuthorize;
	BOOL _autoAuthorize;
	BOOL _recommend;
	NSString* _appId;
	NSString* _name;
	NSString* _version;
	NSString* _slogan;
	NSString* _desc;
	int _size;
	NSString* _installerType;
	NSString* _packageName;
	NSString* _schemeUri;
	NSString* _iconUrl;
	NSString* _downloadUrl;
	NSString* _tipsType;
	NSString* _labelContent;
	NSString* _minSupportOsVersion;
	NSString* _minSupportSdkVersion;
	NSString* _minSupportAppVersionCode;
	NSString* _minSupportClientVersion;
	NSString* _status;
}
@property(assign, nonatomic) BOOL recommend;
@property(assign, nonatomic) BOOL autoAuthorize;
@property(assign, nonatomic) BOOL needAuthorize;
@property(retain, nonatomic) NSString* status;
@property(retain, nonatomic) NSString* minSupportClientVersion;
@property(retain, nonatomic) NSString* minSupportAppVersionCode;
@property(retain, nonatomic) NSString* minSupportSdkVersion;
@property(retain, nonatomic) NSString* minSupportOsVersion;
@property(retain, nonatomic) NSString* labelContent;
@property(retain, nonatomic) NSString* tipsType;
@property(retain, nonatomic) NSString* downloadUrl;
@property(retain, nonatomic) NSString* iconUrl;
@property(retain, nonatomic) NSString* schemeUri;
@property(retain, nonatomic) NSString* packageName;
@property(assign, nonatomic) BOOL alipayApp;
@property(assign, nonatomic) BOOL canDelete;
@property(assign, nonatomic) BOOL display;
@property(retain, nonatomic) NSString* installerType;
@property(assign, nonatomic) int size;
@property(retain, nonatomic) NSString* desc;
@property(retain, nonatomic) NSString* slogan;
@property(retain, nonatomic) NSString* version;
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSString* appId;
-(void).cxx_destruct;
@end
