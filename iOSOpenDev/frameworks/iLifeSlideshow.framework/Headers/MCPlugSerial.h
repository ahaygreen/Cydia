/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <iLifeSlideshow/MCPlug.h>

@class MCContainerSerializer, NSMutableDictionary, NSDictionary, NSString;

@interface MCPlugSerial : MCPlug {
	unsigned mIndex;	// 72 = 0x48
	NSString *mTransitionID;	// 76 = 0x4c
	double mTransitionDuration;	// 80 = 0x50
	NSMutableDictionary *mTransitionAttributes;	// 88 = 0x58
	MCContainerSerializer *mSupercontainer;	// 92 = 0x5c
}
@property(assign) unsigned index;	// G=0x15625; S=0x15635; @synthesize=mIndex
@property(copy) NSString *transitionID;	// G=0x156e9; S=0x156c1; @synthesize=mTransitionID
@property(assign, nonatomic) double transitionDuration;	// G=0x1560d; S=0x15c25; @synthesize=mTransitionDuration
@property(assign) MCContainerSerializer *supercontainer;	// G=0x155ed; S=0x155fd; @synthesize=mSupercontainer
@property(copy) NSDictionary *transitionAttributes;	// G=0x1592d; S=0x15805; 
- (id)init;	// 0x15645
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x15e09
- (void)demolish;	// 0x15d81
- (id)imprint;	// 0x15c71
// declared property setter: - (void)setTransitionDuration:(double)duration;	// 0x15c25
- (id)transitionAttributeForKey:(id)key;	// 0x15b39
- (void)setTransitionAttribute:(id)attribute forKey:(id)key;	// 0x159f9
// declared property getter: - (id)transitionAttributes;	// 0x1592d
// declared property setter: - (void)setTransitionAttributes:(id)attributes;	// 0x15805
- (id)snapshot;	// 0x157a5
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x15701
// declared property getter: - (id)supercontainer;	// 0x155ed
// declared property setter: - (void)setSupercontainer:(id)supercontainer;	// 0x155fd
// declared property getter: - (double)transitionDuration;	// 0x1560d
// declared property getter: - (id)transitionID;	// 0x156e9
// declared property setter: - (void)setTransitionID:(id)anId;	// 0x156c1
// declared property getter: - (unsigned)index;	// 0x15625
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x15635
@end