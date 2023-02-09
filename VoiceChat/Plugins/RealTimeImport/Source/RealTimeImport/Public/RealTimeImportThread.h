// Copyright 2018 David Romanski(Socke). All Rights Reserved.
#pragma once

#include "RealTimeImport.h"


class REALTIMEIMPORT_API FRealTimeImportThread : public FNonAbandonableTask {
public:
	FRealTimeImportThread(FSRealtimeImportThreadJobData jobDataP) :
		jobData(jobDataP) {
	}

	void DoWork();

	FORCEINLINE TStatId GetStatId() const {
		return TStatId();
	}

private:
	FSRealtimeImportThreadJobData jobData;
};