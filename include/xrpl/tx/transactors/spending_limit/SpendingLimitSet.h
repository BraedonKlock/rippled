#if TRANSACTION_INCLUDE
#include <xrpl/tx/transactors/spending_limit/SpendingLimitSet.h>
#endif

#include <xrpl/tx/Transactor.h>

namespace xrpl {

class SpendingLimitSet : public Transactor
{
public:
    static constexpr ConsequencesFactoryType ConsequencesFactory{Normal};

    explicit SpendingLimitSet(ApplyContext& ctx)
        : Transactor(ctx)
    {
    }

    static NotTEC preflight(PreflightContext const& ctx);

    static TER preclaim(PreclaimContext const& ctx);

    TER doApply() override;
};

}  // namespace xrpl
