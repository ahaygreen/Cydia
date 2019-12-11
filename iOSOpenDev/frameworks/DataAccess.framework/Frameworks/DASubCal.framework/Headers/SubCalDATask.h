/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
 */

#import <DASubCal/DATask.h>
#import <DASubCal/SubCalDATask.h>
#import <DASubCal/XXUnknownSuperclass.h>

@class DATaskManager, DAStatusReport;

@interface SubCalDATask : XXUnknownSuperclass <DATask> {
	DATaskManager *_taskManager;	// 4 = 0x4
	BOOL _finished;	// 8 = 0x8
	DAStatusReport *_statusReport;	// 12 = 0xc
}
@property(assign, nonatomic) DATaskManager *taskManager;	// G=0x5711; S=0x5721; @synthesize=_taskManager
@property(retain, nonatomic) DAStatusReport *statusReport;	// G=0x5731; S=0x5741; @synthesize=_statusReport
// declared property setter: - (void)setStatusReport:(id)report;	// 0x5741
// declared property getter: - (id)statusReport;	// 0x5731
// declared property setter: - (void)setTaskManager:(id)manager;	// 0x5721
// declared property getter: - (id)taskManager;	// 0x5711
- (void)didFinish;	// 0x570d
- (void)performDelegateCallbackWithError:(id)error;	// 0x5709
- (void)willFinish;	// 0x5705
- (void)finishWithError:(id)error;	// 0x5685
- (BOOL)shouldHoldPowerAssertion;	// 0x5681
- (void)cancelTaskWithReason:(int)reason underlyingError:(id)error;	// 0x566d
- (void)performTask;	// 0x5669
- (void)dealloc;	// 0x561d
@end

@interface SubCalDATask (ConsumerDictionarySupport)
- (id)consumerDictKey;	// 0x3105
@end