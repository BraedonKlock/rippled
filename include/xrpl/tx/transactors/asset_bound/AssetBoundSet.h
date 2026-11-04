#if TRANSACTION_INCLUDE
#   include <xrpl/tx/transactors/asset_bound/AssetBoundSet.h>
#endif

#include <xrpl/tx/Transactor.h>

namespace xrpl {

class AssetBoundSet : public Transactor
{
public:
    static constexpr ConsequencesFactoryType ConsequencesFactory{Normal};

    explicit AssetBoundSet(ApplyContext& ctx)
        : Transactor(ctx)
    {
    }

    static NotTEC preflight(PreflightContext const& ctx);

    static TER preclaim(PreclaimContext const& ctx);

    TER doApply() override;
};

}  // namespace xrpl
