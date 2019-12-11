/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/XXUnknownSuperclass.h>
#import <CoreDAV/CoreDAVLeafDataPayload.h>


@class NSData, NSString, NSArray, NSURL;

#ifndef __CoreDAVLeafDataPayload__
#define __CoreDAVLeafDataPayload__ 1
@protocol CoreDAVLeafDataPayload <NSObject>
@optional
@property(readonly, assign) NSArray *childrenOrder;
@required
@property(readonly, assign) NSString *syncKey;
@property(readonly, assign) NSData *dataPayload;
@property(retain) NSURL *serverID;
// declared property getter: - (id)syncKey;
// declared property getter: - (id)dataPayload;
// declared property setter: - (void)setServerID:(id)anId;
// declared property getter: - (id)serverID;
- (id)initWithURL:(id)url eTag:(id)tag dataPayload:(id)payload inContainerWithURL:(id)url4 withAccountInfoProvider:(id)accountInfoProvider;
@optional
// declared property getter: - (id)childrenOrder;
@end
#endif

@interface CoreDAVLeafDataPayload : XXUnknownSuperclass <CoreDAVLeafDataPayload> {
	NSURL *_serverID;	// 4 = 0x4
	NSString *_syncKey;	// 8 = 0x8
	NSData *_dataPayload;	// 12 = 0xc
}
@property(readonly, assign) NSArray *childrenOrder;
@property(readonly, assign) NSString *syncKey;	// G=0x14219; @synthesize=_syncKey
@property(readonly, assign) NSData *dataPayload;	// G=0x14209; @synthesize=_dataPayload
@property(retain) NSURL *serverID;	// G=0x141d1; S=0x141e5; @synthesize=_serverID
// declared property getter: - (id)syncKey;	// 0x14219
// declared property getter: - (id)dataPayload;	// 0x14209
// declared property setter: - (void)setServerID:(id)anId;	// 0x141e5
// declared property getter: - (id)serverID;	// 0x141d1
- (void)dealloc;	// 0x1415d
- (id)initWithURL:(id)url eTag:(id)tag dataPayload:(id)payload inContainerWithURL:(id)url4 withAccountInfoProvider:(id)accountInfoProvider;	// 0x140d1
@end